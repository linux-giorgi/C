#include "log.h"

static FILE *log_file = NULL;

int log_init(const char *filename) {
    log_file = fopen(filename, "a");
    return log_file != NULL ? 0 : -1;
}

void log_close(void) {
    if (log_file) {
        fclose(log_file);
        log_file = NULL;
    }
}

static const char *level_to_string(LogLevel level) {
    switch (level) {
        case LOG_DEBUG: return "DEBUG";
        case LOG_INFO:  return "INFO";
        case LOG_WARN:  return "WARN";
        case LOG_ERROR: return "ERROR";
        default:        return "UNKNOWN";
    }
}

void log_write(LogLevel level, const char *format, ...) {
    if (!log_file) return;

    // Timestamp
    time_t now = time(NULL);
    struct tm *t = localtime(&now);
    fprintf(log_file, "[%04d-%02d-%02d %02d:%02d:%02d] ",
            t->tm_year + 1900, t->tm_mon + 1, t->tm_mday,
            t->tm_hour, t->tm_min, t->tm_sec);

    // Log level
    fprintf(log_file, "[%s] ", level_to_string(level));

    // Log message
    va_list args;
    va_start(args, format);
    vfprintf(log_file, format, args);
    va_end(args);

    fprintf(log_file, "\n");
    fflush(log_file);
}

