#ifndef PROTOCOL_BASE_MESSAGE_H
#define PROTOCOL_BASE_MESSAGE_H
// WARNING:  this code generate by prototransfer tool, do not edit it.

#include <stdint.h>
#include <cstddef.h>
#include <string>
#include <zbluenet/exchange/base_struct.h>


#include <zbluenet/demo/proto/base.pb.h>


class UserInfoMessage : public zbluenet::exchange::BaseStruct {
public:
	UserInfoMessage();
	~UserInfoMessage();

	void swap(UserInfoMessage&other);
	static zbluenet::exchange::BaseStruct *create() { return new UserInfoMessage(); }
	virtual int encode(char *buffer, size_t size) const;
	virtual int decode(const char *buffer, size_t size);
	virtual UserInfoMessage *clone() const { return new UserInfoMessage(*this);
	virtual std::string dump() const;

public:
	protocol::UserInfo data;
};

#endif