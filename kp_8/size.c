// Определение размера списка

#include "data.h"

void std_size(struct cell *tmp) {
    int size = 0;
    while (tmp) {
        size += 1;
        if (tmp->next) {
            tmp = tmp->next;
        }
        else {
            printf("Quantity of bendings (+ barrier sign): %d\n", size);
            return;
        }
    }
    printf("List is empty\n");
    return;
}
