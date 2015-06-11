.PHONY: all clean 

all: main

main: main.o main2.o
	gcc -m32 -o main main.o main2.o
	
main2.o: main2.asm
	nasm -f elf32 -g -F dwarf -l main2.lst main2.asm

main.o: main.c
	gcc -m32 -Wall -g -c main.c

clean:
	rm -f main *.o *.lst
