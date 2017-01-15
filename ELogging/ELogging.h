#ifdef _WINDOWS
#define ELOGGING_API extern "C" __declspec(dllexport)
#else
#define ELOGGING_API extern "C"
#endif


ELOGGING_API void ELog(int eLoggingEnum, char* fun, int line, char* msg, ...);
ELOGGING_API void ELogDirect(int eLoggingEnum, char* fun, int line, char* msg);