#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "../lab24/data.h"
#include "../lab24/cleaner.h"

cell *ascencion(cell *tmp)
{
    while (tmp->parent)
    {
        tmp = tmp->parent;
    }
}

void clean(cell *tmp)
{
    if (tmp->left)
    {
        clean(tmp->left);
    }
    if (tmp->right)
    {
        clean(tmp->right);
    }
    free(tmp);
}

void clean_tree(cell *tmp)
{
    if (tmp)
    {
        tmp = ascencion(tmp);
        clean(tmp);
    }
}
