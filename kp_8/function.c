// удаление из списка всех элементов, предшествующих и последующих заданному значению

#include "data.h"

struct cell* unstd_act (struct cell *tmp, enum bending val) {
    struct cell*root = tmp;
    while (tmp) {
        if (tmp->value == val) {
            struct cell*need;
            Cret (need, struct cell);
            need->value = tmp->value;
            need->next = NULL;
            need->prev = NULL;
            while (root) {
                tmp = root->next;
                free (root);
                root = tmp;
            }
            return need;
        }
        if (tmp->next) {
            tmp = tmp->next;
        }
        else {
            return root;
        }
    }
    return root;
}
