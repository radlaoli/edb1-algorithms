CC = gcc
CFLAGS = -Iinclude -Wall

SRCS =  ../src/searching/linear_search.c ../src/utils.c ../examples/test_searching.c
TARGET = bin/test_searching

all:
	@mkdir -p bin
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)
	@echo "Compiled, run with ./$(TARGET)"

clean:
	rm -f $(TARGET)