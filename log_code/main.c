#include "log.h"

int main() {
    if (log_init("app.log") != 0) {
        fprintf(stderr, "Failed to open log file\n");
        return 1;
    }

    log_write(LOG_INFO, "Application started");
    log_write(LOG_DEBUG, "This is a debug message: x = %d", 42);
    log_write(LOG_WARN, "Low disk space");
    log_write(LOG_ERROR, "Something went wrong!");

    log_close();
    return 0;
}

