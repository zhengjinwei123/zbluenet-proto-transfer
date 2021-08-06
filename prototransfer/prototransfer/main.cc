#include <cstdio>
#include <string>
#include <stdlib.h>
#include "proto_parser.h"
#include <memory>

void Pause() {
#ifdef _WIN32
	system("pause");
#endif
}

int main(int argc, char *argv[])
{
	if (argc < 4) {
		printf("help: ./prototransfer  proto_file_dir  proto_file_name protocol_location \n");
		printf("example: ./prototransfer protocol base.proto zbluenet/demo/proto/ \n");
		Pause();
		return -1;
	}

	std::string proto_file_dir = argv[1];
	std::string proto_file_name = argv[2];
	std::string protocol_abs_location = argv[3];

	std::unique_ptr<GoogleProtoTransferCpp> transfer(new GoogleProtoTransferCpp());
	transfer->parseProtoFile(proto_file_dir, proto_file_name, protocol_abs_location);

	return 0;
}