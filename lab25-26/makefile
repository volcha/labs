#Makefile for laba26
CC = gcc
LD = gcc
CCFLAGS = -g -Wall -std=c99
OBJ = laba26.o deque.o
laba26.out: $(OBJ)
	$(LD) -o laba26.out $(OBJ)
laba26.o: laba26.c deque.h deque.c
	$(CC) $(CCFLAGS) -c laba26.c
deque.o: deque.c deque.h
	$(CC) $(CCFLAGS) -c deque.c
clean:
	rm -f *.o
