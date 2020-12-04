
all:main

main:main.o myBank.o
	gcc -Wall myBank.o main.o

myBank:myBank.c myBank.h
	gcc -Wall -c myBank.c -o myBank.o
	
mains:main.c myBank.h myBank.c
	gcc -Wall -c main.c -o main.o
	
.PHONY:clean

clean:
	rm -f *.o *.out mains
	
	
