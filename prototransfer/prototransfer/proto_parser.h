#ifndef PROTO_PARSER_H
#define PROTO_PARSER_H

#include <iostream>
#include <string>
#include <stdint.h>
#include <cstring>
#include <vector>
#include <sstream>
#include <algorithm>
#include <fstream>

#include <google/protobuf/compiler/importer.h>
#include <google/protobuf/dynamic_message.h>

using  namespace google::protobuf;

class GoogleProtoTransferCpp {
public:
	struct ProtoInfo {
		std::string nspace;
		std::string messageName;
	};

	struct EnumInfo {
		std::string name;
		std::string field_name;
		std::string field_comment;
	};

	using ProtoInfoVec = std::vector<ProtoInfo>;
	using EnumInfoVec = std::vector<EnumInfo>;

public:
	std::vector<std::string> split(std::string str, std::string pattern)
	{
		std::string::size_type pos;
		std::vector<std::string> result;
		str += pattern;//扩展字符串以方便操作
		int size = str.size();
		for (int i = 0; i < size; i++)
		{
			pos = str.find(pattern, i);
			if (pos < size)
			{
				std::string s = str.substr(i, pos - i);
				result.push_back(s);
				i = pos + pattern.size() - 1;
			}
		}
		return result;
	}

	void parseProtoFile(const std::string &proto_dirname, const std::string &proto_file_name, const std::string &protocol_cpp_path)
	{
		google::protobuf::compiler::DiskSourceTree sourceTree;
		sourceTree.MapPath("project_root", "./");
		google::protobuf::compiler::Importer importer(&sourceTree, nullptr);
		auto fileDc = importer.Import("project_root/protofiles/" + proto_file_name);
		if (fileDc == nullptr) {
			printf("proto file %s not found  \r\n", proto_file_name.c_str());
			return;
		}
		auto file_base_name = std::string("");
		if (strstr(proto_file_name.c_str(), ".") != nullptr) {
			std::vector<std::string> splitStrVec = split(proto_file_name, ".");
			file_base_name = splitStrVec[0];
		}

		protoinfos_.clear();

		bool find_messageid = false;
		for (size_t i = 0; i < fileDc->enum_type_count(); ++i) {
			auto descriptor = fileDc->enum_type(i);
			auto full_name = descriptor->full_name();
			auto name = descriptor->name();

			if (name != "ID") {
				continue;
			}
			find_messageid = true;

			for (size_t j = 0; j < descriptor->value_count(); ++j) {
				auto val = descriptor->value(j)->number();
				auto str_v = descriptor->FindValueByNumber(val)->name();
			
				google::protobuf::SourceLocation* source_location{new google::protobuf::SourceLocation };
				descriptor->value(j)->GetSourceLocation(source_location);
				auto b = source_location->trailing_comments;
				b.erase(std::remove(b.begin(), b.end(), '\n'), b.end());

				EnumInfo info;
				info.name = name;
				info.field_name = str_v;
				info.field_comment = b;

				enuminfos_.emplace_back(info);
			}
		}

		if (find_messageid == false) {
			printf("not found enum ID !!!!");
			return;
		}

		for (size_t i = 0; i < fileDc->message_type_count(); ++i) {
			auto descriptor = fileDc->message_type(i);
			auto full_name = descriptor->full_name();
			auto name = descriptor->name();


			auto nspace = std::string("");
			if (strstr(full_name.c_str(), ".") != nullptr) {
				std::vector<std::string> splitStrVec = split(full_name, ".");
				nspace = splitStrVec[0];
			}

			ProtoInfo info;
			info.nspace = nspace;
			info.messageName = name;

			protoinfos_.emplace_back(info);
		}

		process(proto_dirname, file_base_name, protocol_cpp_path);
	}

	std::string processEnum(std::string file_name, const std::string &nspace) {
		std::stringstream	 ss;
		ss.clear();
		toUpper(file_name);

		std::string structName = file_name + "MessageType";

		ss << "struct " << structName<< " {" << std::endl;
		ss << "\t" << "template <typename AnyType>" << std::endl;
		ss << "\t" << "struct id;" << std::endl << std::endl;
		ss << "\t" << "zbluenet::exchange::BaseStruct *create(int id);" << std::endl;
		ss << "};" << std::endl << std::endl;

		for (auto iter = enuminfos_.begin(); iter != enuminfos_.end(); ++iter) {
			ss << "template<>" << std::endl;
			ss << "struct " << structName << "::id<" << iter->field_comment << "> {" << std::endl;

			if (nspace != "") {
				ss << "\t" << "static const int value = " << nspace << "::" << iter->field_name << ";" << std::endl;
			} else {
				ss << "\t" << "static const int value = " << iter->field_name << ";" << std::endl;
			}
			
			ss << "};" << std::endl << std::endl;
		}

		return ss.str();
	}

	void process(const std::string &proto_file_dir, const std::string &proto_file_base_name, const std::string &protocol_cpp_path)
	{
		std::stringstream	 file_header_ss;
		file_header_ss.clear();

		std::string nspace_name = "";
		for (auto iter = protoinfos_.begin(); iter != protoinfos_.end(); ++iter) {
			file_header_ss << toCppHeaderCodeString(proto_file_dir, proto_file_base_name, iter->nspace, iter->messageName);
			file_header_ss << std::endl;
			file_header_ss << toCppCodeString(protocol_cpp_path, proto_file_base_name) << std::endl;

			if (iter->nspace != "") {
				nspace_name = iter->nspace;
				file_header_ss << "namespace " << iter->nspace << " {" << std::endl << std::endl;
			}
			break;
		}


		std::stringstream file_define_ss;
		file_define_ss << toCppDefineHeaderString(proto_file_base_name) << std::endl;
		if (nspace_name != "") {
			file_define_ss << "namespace " << nspace_name << " {" << std::endl << std::endl;
		}

		for (auto iter = protoinfos_.begin(); iter != protoinfos_.end(); ++iter) {
			file_header_ss << toCppMessageHeaderCodeString(iter->nspace, iter->messageName);

			file_define_ss << toCppDefineString(iter->messageName) << std::endl;
		}
		// 处理枚举定义
		file_header_ss << std::endl;
		std::string enum_str = processEnum(proto_file_base_name, nspace_name);
		file_header_ss << enum_str;

		if (nspace_name != "") {
			file_header_ss << "} // namespace " << nspace_name << std::endl;
			file_define_ss << "} // namespace " << nspace_name << std::endl;
		}

		file_header_ss << "#endif";
		if (writeFile("./cpp/" +proto_file_base_name + ".h", file_header_ss.str()) == false) {
			printf("write cpp file %s fail", std::string(proto_file_base_name + ".h").c_str());
		} else {
			printf("write cpp file %s success", std::string(proto_file_base_name + ".h").c_str());
		}

		if (writeFile("./cpp/" + proto_file_base_name + ".cc", file_define_ss.str()) == false) {
			printf("write cpp file %s fail", std::string(proto_file_base_name + ".cc").c_str());
		} else {
			printf("write cpp file %s success", std::string(proto_file_base_name + ".cc").c_str());
		}
	}

private:
	bool writeFile(const std::string &file_name, const std::string &data)
	{
		std::ofstream  cpp_file;
		cpp_file.open(file_name);

		if (cpp_file.is_open() == false) {
			return false;
		}
		cpp_file << data;
		cpp_file.close();
		return true;
	}

	void toUpper(std::string &str) const
	{
		transform(str.begin(), str.end(), str.begin(), toupper);
	}

	std::string toCppHeaderCodeString(std::string fileDir, std::string fileBaseName, std::string nspace, std::string messageName) const {

		std::string fileBaseNameOld = std::string(fileBaseName);
		toUpper(fileDir);
		toUpper(fileBaseName);

		std::stringstream ss;
		ss.clear();
		ss << "#ifndef " << fileDir << "_" << fileBaseName << "_MESSAGE_H" << std::endl;
		ss << "#define " << fileDir << "_" << fileBaseName << "_MESSAGE_H" << std::endl;
		ss << "// WARNING:  this code generate by prototransfer tool, do not edit it." << std::endl << std::endl;
	
		ss << "#include <stdint.h>" << std::endl;
		ss << "#include <cstddef>" << std::endl;
		ss << "#include <string>" << std::endl;
		ss << "#include <zbluenet/exchange/base_struct.h>" << std::endl << std::endl;

		return ss.str();
	}

	std::string toCppCodeString(std::string protocol_location_dir, std::string fileBaseName) const {
		std::stringstream ss;
		ss.clear();
		//  zbluenet/demo/proto/
		ss << "#include <" << protocol_location_dir << fileBaseName << ".pb.h>" << std::endl << std::endl;
		return ss.str();
	}

	std::string toCppMessageHeaderCodeString(const std::string &nspace, const std::string &messageName) const {
		std::stringstream ss;
		ss.clear();
		std::string messageClsName = messageName + "Message";
		ss << "class " << messageClsName << " : public zbluenet::exchange::BaseStruct {" << std::endl;
		ss << "public:" << std::endl;
		ss << "\t" << messageClsName << "();" << std::endl;
		ss << "\t~" << messageClsName << "();" << std::endl << std::endl;
		ss << "\t" << "void swap(" << messageClsName << "&other);" << std::endl;
		ss << "\t" << "static zbluenet::exchange::BaseStruct *create() { return new " << messageClsName << "(); }" << std::endl;
		ss << "\t" << "virtual int encode(char *buffer, size_t size) const;" << std::endl;
		ss << "\t" << "virtual int decode(const char *buffer, size_t size);" << std::endl;
		ss << "\t" << "virtual " << messageClsName << " *clone() const { return new " << messageClsName << "(*this); }" << std::endl;
		ss << "\t" << "virtual std::string dump() const;" << std::endl << std::endl;
		ss << "public:" << std::endl;
		ss << "\t" << nspace  << "::"<< messageName << " data;" << std::endl;
		ss << "};" << std::endl << std::endl;

		return ss.str();
	}

	std::string toCppDefineHeaderString(const std::string &proto_file_base_name) {
		std::stringstream ss;
		ss.clear();

		ss << "#include \"" << proto_file_base_name << ".h\"" << std::endl;
		ss << "// WARNING:  this code generate by prototransfer tool, do not edit it." << std::endl << std::endl;

		return ss.str();
	}

	std::string toCppDefineString(const std::string &messageName) {
		std::stringstream ss;
		ss.clear();

		std::string messageClsName = messageName + "Message";

		ss << "//**************************" << messageClsName << "*********************" << std::endl;
		ss << messageClsName << "::" << messageClsName << "()" << std::endl;
		ss << "{" << std::endl << std::endl;
		ss << "}" << std::endl << std::endl;
		ss << messageClsName << "::~" << messageClsName << "()" << std::endl;
		ss << "{" << std::endl << std::endl;
		ss << "}" << std::endl << std::endl;
		ss << "void " << messageClsName << "::swap(" << messageClsName << " &other)" << std::endl;
		ss << "{" << std::endl;
		ss << "\t" << "this->data.Swap(&other.data);" << std::endl;
		ss << "}" << std::endl << std::endl;

		ss << "int " << messageClsName << "::encode(char *buffer, size_t size) const" << std::endl;
		ss << "{" << std::endl;
		ss << "\t" << "if (!data.SerializeToArray(buffer, size)) {" << std::endl;
		ss << "\t\t" << "return -1;" << std::endl;
		ss << "\t}" << std::endl << std::endl;
		ss << "\t" << "return data.ByteSizeLong();" << std::endl;
		ss << "}" << std::endl << std::endl;

		ss << "int " << messageClsName << "::decode(const char *buffer, size_t size)" << std::endl;
		ss << "{" << std::endl;
		ss << "\t" << "std::string str(buffer, size);" << std::endl;
		ss << "\t" << "if (false == data.ParseFromString(str)) {" << std::endl;
		ss << "\t\t" << "return 0;" << std::endl;
		ss << "\t}" << std::endl << std::endl;
		ss << "\t" << "return size;" << std::endl;
		ss << "}" << std::endl << std::endl;

		ss << "std::string " << messageClsName << "::dump() const" << std::endl;
		ss << "{" << std::endl;
		ss << "\t" << "return this->data.DebugString();" << std::endl;
		ss << "}" << std::endl << std::endl;

		return ss.str();
	}

private:
	ProtoInfoVec protoinfos_;
	EnumInfoVec enuminfos_;
};

#endif
