#pragma once

#ifdef _WINDOWS

#define WIN32_LEAN_AND_MEAN

#ifndef WINVER                 
#define WINVER 0x0600          
#endif

#ifndef _WIN32_WINNT           
#define _WIN32_WINNT 0x0600     
#endif

#ifndef _WIN32_WINDOWS         
#define _WIN32_WINDOWS 0x0410 
#endif

#ifndef _WIN32_IE               
#define _WIN32_IE 0x0700        
#endif

#pragma warning(disable:4996)

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <winsock2.h>
#include <Mswsock.h>
#include <process.h>
#include <tchar.h>
#include <assert.h>
#include <map>
#include <vector>
#include <list>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <MMSystem.h>
#include <atlconv.h>
#include "net\ucnet.h"
#include "ELoggingHeader.h"
#include "Net\GSNetSessionMgr.h"
#include "MsgLists/BSToGS.pb.h"
#include "MsgLists/GSToBS.pb.h"
#include "MsgLists/GSToSS.pb.h"
#include "MsgLists/SSToGS.pb.h"
#include "MsgLists/GSToCS.pb.h"
#include "MsgLists/CSToGS.pb.h"
#include "MsgLists/GCToCS.pb.h"
#include "MsgLists/GCToSS.pb.h"
#include "MsgLists/GSToGC.pb.h"
#include <boost/shared_ptr.hpp>
#include "MsgLists/ParseProto.h"
#include "FBAll_Const.h"
using namespace std;
using namespace UCODE;
#endif

INT64 GetMiliSecond();