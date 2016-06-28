
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdarg.h>
#include <errno.h>
#include "log.h"
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


logtime_t getLogTime()
{
	logtime_t now;
	time_t t = time(NULL);
	struct tm *time = localtime(&t);
	strftime( now.formattime, 18, "%Y%m%d-%H:%M:%S", time);
	return now;
}

