CC = gcc
CFLAGS = -Iinclude -Wall

SRCS = src/searching/linear_search.c src/utils.c examples/test_searching.c
TARGET = bin/test_searching.exe

all:
	@if not exist bin mkdir bin
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)
	@echo Compiled, run with ./$(TARGET)

clean:
	@if exist bin\test_searching.exe del /q bin\test_searching.exe