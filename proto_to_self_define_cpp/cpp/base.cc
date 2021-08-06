#include "base.h"
// WARNING:  this code generate by prototransfer tool, do not edit it.


//**************************UserInfoMessage*********************
UserInfoMessage::UserInfoMessage()
{

}

UserInfoMessage::~UserInfoMessage()
{

}

void UserInfoMessage::swap(UserInfoMessage &other)
{
	this->data.Swap(&other.data);
}

int UserInfoMessage::encode(char *buffer, size_t size) const
{
	if (!data.SerializeToArray(buffer, size)) {
		return -1;
	}

	return data.ByteSizeLong();
}

int UserInfoMessage::decode(const char *buffer, size_t size) const
{
	std::string str(buffer, size);
	if (false == data.ParseFromString(str)) {
		return 0;
	}

	return size;
}

std::string UserInfoMessage::dump() const
{
	return this->data.DebugString();
}


