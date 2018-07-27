CC=g++
CFLAGS=-I.

all: main.cpp
	$(CC) main.cpp -o main.o
	$(CC) main.cpp -o main main.o
