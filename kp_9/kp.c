#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#include "data.h"

int menu(void) {
    printf("%s\n", "1. Add table");
    printf("%s\n", "2. Sort table");
    printf("%s\n", "3. Search at table");
    printf("%s\n", "4. Exit");
    int ans;
    scanf("%d", &ans);
    return ans;
}

int main() {
    row *table = NULL;
    int size = 0;

    printf("%s\n", "Welcome!");
    int k = 0;

    while (k != 4)
    {
        k = menu();
        switch (k)
        {
        case 1:
        {
            size += 1;
            table = (row *)realloc(table, size * sizeof(row));
            if (!table)
            {
                size -= 1;
                printf("Out of memory\n");
                break;
            }
            printf("Enter a string: ");
            getchar();
            scanf("%[^\n]s", &(table[size - 1].string));
            printf("Enter a key: ");
            getchar();
            scanf("%f", &(table[size - 1].key));
            printf("\n");
        }
        break;
        case 2:
        {
            for (int i = 0; i < size; i++)
            {
                printf("%4f  %s\n", table[i].key, table[i].string);
            }
            printf("\n");
	    for (int i = 1; i < size; i++) {
		    int left = 0;
		    int right = i;
		    while (right >= left) {
			    int medium = (right + left) / 2;
			    if (table[i].key < table[medium].key) {
				    right = medium - 1;
			    }
			    else {
				    left = medium + 1;
			    }
		    }
		    for (int j = i; j > left; j--) {
			    row variable = table[j];
			    table[j] = table[j - 1];
			    table[j - 1] = variable;
		    }
	    }
            for (int i = 0; i < size; i++)
            {
                printf("%4f  %s\n", table[i].key, table[i].string);
            }
            printf("\n");
        }
        break;
        case 3:
        {
            getchar();
            printf("Enter a key: ");
            float key;
            scanf("%f", &key);
            search(table, 0, size - 1, key);
        }
        break;
        case 4:
            break;
        default:
            printf("%s\n", "Try again)");
            break;
        }
    }

    printf("%s\n", "Goodbye!");
    return 0;
}
