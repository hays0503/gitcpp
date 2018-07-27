run: all
	./bkf

all: bkf

bkf: main.o
	gcc main.o -o bkf

main.o: main.c
	gcc -Wall -c main.c

clean:
	rm -rf *.o
