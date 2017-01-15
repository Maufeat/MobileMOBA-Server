#pragma once
#include "Net/IMsgHandle.h"
#include "Net/ISrvCliSession.h"

class CSDKMsgHandle_Balance : public IMsgHandle
{
public:
	CSDKMsgHandle_Balance();
	virtual ~CSDKMsgHandle_Balance() {}
};


class SDKSession : public ISrvCliSession
{
public:
	SDKSession(void);
	~SDKSession(void);
	virtual void OnClose();
};

