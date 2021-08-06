#ifndef PROTOCOL_BASE_MESSAGE_H
#define PROTOCOL_BASE_MESSAGE_H
// WARNING:  this code generate by prototransfer tool, do not edit it.

#include <stdint.h>
#include <cstddef.h>
#include <string>
#include <zbluenet/exchange/base_struct.h>


#include <zbluenet/demo/proto/base.pb.h>


class C2SLoginReqMessage : public zbluenet::exchange::BaseStruct {
public:
	C2SLoginReqMessage();
	~C2SLoginReqMessage();

	void swap(C2SLoginReqMessage&other);
	static zbluenet::exchange::BaseStruct *create() { return new C2SLoginReqMessage(); }
	virtual int encode(char *buffer, size_t size) const;
	virtual int decode(const char *buffer, size_t size);
	virtual C2SLoginReqMessage *clone() const { return new C2SLoginReqMessage(*this);
	virtual std::string dump() const;

public:
	protocol::C2SLoginReq data;
};

class S2CLoginRespMessage : public zbluenet::exchange::BaseStruct {
public:
	S2CLoginRespMessage();
	~S2CLoginRespMessage();

	void swap(S2CLoginRespMessage&other);
	static zbluenet::exchange::BaseStruct *create() { return new S2CLoginRespMessage(); }
	virtual int encode(char *buffer, size_t size) const;
	virtual int decode(const char *buffer, size_t size);
	virtual S2CLoginRespMessage *clone() const { return new S2CLoginRespMessage(*this);
	virtual std::string dump() const;

public:
	protocol::S2CLoginResp data;
};

class C2SLogoutReqMessage : public zbluenet::exchange::BaseStruct {
public:
	C2SLogoutReqMessage();
	~C2SLogoutReqMessage();

	void swap(C2SLogoutReqMessage&other);
	static zbluenet::exchange::BaseStruct *create() { return new C2SLogoutReqMessage(); }
	virtual int encode(char *buffer, size_t size) const;
	virtual int decode(const char *buffer, size_t size);
	virtual C2SLogoutReqMessage *clone() const { return new C2SLogoutReqMessage(*this);
	virtual std::string dump() const;

public:
	protocol::C2SLogoutReq data;
};

class S2CLogoutRespMessage : public zbluenet::exchange::BaseStruct {
public:
	S2CLogoutRespMessage();
	~S2CLogoutRespMessage();

	void swap(S2CLogoutRespMessage&other);
	static zbluenet::exchange::BaseStruct *create() { return new S2CLogoutRespMessage(); }
	virtual int encode(char *buffer, size_t size) const;
	virtual int decode(const char *buffer, size_t size);
	virtual S2CLogoutRespMessage *clone() const { return new S2CLogoutRespMessage(*this);
	virtual std::string dump() const;

public:
	protocol::S2CLogoutResp data;
};

#endif