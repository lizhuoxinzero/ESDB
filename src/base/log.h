#ifndef LOG_H
#define LOG_H

#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdarg.h>
#include <errno.h>

/*
 * std:
 * INFO
 *
 * error:
 * DEBUG
 * WORNING
 * ERROR
 * NOTICE
 * */




typedef struct
{
	char formattime[18];
} logtime_t;


extern logtime_t getLogTime();


#define LOG_INFO(format, args...) printf("[INFO][%s:%d#%s][%s]"format"\n", __FILE__, __LINE__, __FUNCTION__, getLogTime().formattime , ##args);

#define LOG_DEBUG(format, args...) fprintf(stderr, "[DEBUG][%s:%d#%s][%s]"format"\n", __FILE__, __LINE__, __FUNCTION__, getLogTime().formattime , ##args);

#define LOG_WORNING(format, args...) fprintf(stderr, "[WORNING][%s:%d#%s][%s]"format"\n", __FILE__, __LINE__, __FUNCTION__, getLogTime().formattime , ##args);
#define LOG_WORNING_MSG(format, args...) fprintf(stderr, "[WORNING][%s:%d#%s][%s][errmsg:%s]"format"\n", __FILE__, __LINE__, __FUNCTION__, getLogTime().formattime,strerror(errno) , ##args);

#define LOG_NOTICE(format, args...) fprintf(stderr, "[NOTICE][%s:%d#%s][%s]"format"\n", __FILE__, __LINE__, __FUNCTION__, getLogTime().formattime , ##args);
#define LOG_NOTICE_MSG(format, args...) fprintf(stderr, "[NOTICE][%s:%d#%s][%s][errmsg:%s]"format"\n", __FILE__, __LINE__, __FUNCTION__, getLogTime().formattime,strerror(errno) , ##args);

#define LOG_ERROR(format, args...) fprintf(stderr, "[ERROR][%s:%d#%s][%s]"format"\n", __FILE__, __LINE__, __FUNCTION__, getLogTime().formattime , ##args);
#define LOG_ERROR_MSG(format, args...) fprintf(stderr, "[ERROR][%s:%d#%s][%s][errmsg:%s]"format"\n", __FILE__, __LINE__, __FUNCTION__, getLogTime().formattime,strerror(errno) , ##args);

#endif
