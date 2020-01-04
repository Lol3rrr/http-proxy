#ifndef LOGGER_H
#define LOGGER_H

#include <stdio.h>
#include <stdarg.h>

extern int debug;

void setDebugOutput(int value);
void logInfo(const char *fmt, ...);
void logError(const char *fmt, ...);
void logDebug(const char *fmt, ...);

#endif
