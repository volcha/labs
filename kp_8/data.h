#ifndef DATA_H
#define DATA_H
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#define eps 0.00001
#define Bending(new_val) (new_val == 1) ? WATER : (new_val == 2) ? EARTH : (new_val == 3) ? FIRE : AIR

#define Cret(tmp, type)                   \
    tmp = (type *)malloc(sizeof(type *));  \
    if (!tmp) {                            \
        printf ("Out of memory\n");        \
    }

enum bending {
    WATER,
    EARTH,
    FIRE,
    AIR
} value;

typedef struct cell {
    enum bending value;
    struct cell *next;
    struct cell *prev;
} cell;

void std_print(struct cell *);
void std_size(struct cell *);
struct cell *std_insert(struct cell *, enum bending);
struct cell *std_delete(struct cell *, enum bending);
struct cell *unstd_act(struct cell *, enum bending);
#endif
