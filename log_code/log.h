#ifndef LOG_H
#define LOG_H

#include <stdio.h>
#include <stdarg.h>
#include <time.h>

// Log levels
typedef enum {
    LOG_DEBUG,
    LOG_INFO,
    LOG_WARN,
    LOG_ERROR
} LogLevel;

// Initialize the log system (open file)
int log_init(const char *filename);

// Close the log system (close file)
void log_close(void);

// Logging function
void log_write(LogLevel level, const char *format, ...);

#endif // LOG_H

