#ifndef _deque_H_
#define _deque_H_
#include <stdbool.h>

typedef struct{
	int key;
	int value;
} Item;

typedef struct{
	int front,back,size;
	Item data[5];
} Deque;

int d_searchmax(const Deque*);
void d_sort( Deque*);
void d_push_back(Deque*,Item);
void d_print(const Deque*);

#endif
