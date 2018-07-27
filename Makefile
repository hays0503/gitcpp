
all:
	g++ -Wall -c main.cpp
	g++ main.o -o main

clean:
	rm -rf *.o
