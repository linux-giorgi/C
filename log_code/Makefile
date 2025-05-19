# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c99

# Source files
SRCS = main.c log.c
OBJS = $(SRCS:.c=.o)

# Output binary
TARGET = main.elf

# Default rule
all: $(TARGET)

# Link object files into the target binary
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Compile .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean build artifacts
clean:
	rm -f *.elf *.o *.txt

# Optional: Phony targets
.PHONY: all clean

