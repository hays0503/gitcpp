run: all
	./bkf

all: bkf

bkf: main.o
	g++ main.o -o bkf

main.o: main.c
	g++ -Wall -c main.cpp

clean:
	rm -rf *.o
