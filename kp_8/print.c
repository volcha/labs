// Печать списка, начиная с барьерного элемента

#include "data.h"

void std_print (struct cell *tmp) {
    if (tmp) {
        printf ("Barrier sign: ");
    }
    while (tmp) {
        printf("%s\n", (tmp->value == WATER) ? "WATER" : (tmp->value == EARTH) ? "EARTH" : (tmp->value == FIRE) ? "FIRE" : "AIR");
        if (tmp->next) {
            tmp = tmp->next;
        }
        else {
            return;
        }
    }
    printf("List is empty\n");
    return;
}
