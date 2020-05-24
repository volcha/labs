/*
Создание линейного однонапрвленного списка с барьерным элементом, 
проведение над ним 4 стандартных действий и 1 нестандартного.
Стандартные:
1. Печать списка
2. Вставка нового элемента в список
3. Удаление элемента из списка
4. Подсчёт длины списка
Тип элементов: перечислимый
Нестандартное действие: удаление из списка всех элементов, предшествующих и последующих заданному значению
Барьерный элемент считается за обычный, за исключением наличия ссылки на последний элемент списка
*/

#include "data.h"

int menu(void) {
    printf("%s\n", "1. Print plan of train");
    printf("%s\n", "2. Add bending to plan");
    printf("%s\n", "3. Delete bending from plan");
    printf("%s\n", "4. Check quantity of bending in train");
    printf("%s\n", "5. Leave the one bending");
    printf("%s\n", "6. Finish training");
    int ans;
    scanf("%d", &ans);
    return ans;
}

int main() {
    printf("%s\n", "Welcome, Avatar. Let`s go training");
    int k = 0;
    struct cell *barrier = NULL;
    while (k != 6) {
        k = menu();
        switch (k)
        {
        case 1: //Print
        {
            getchar();
            std_print(barrier);
        }
        break;
        case 2: //Insert
        {
            getchar();
            printf ("Choose bending\nWATER (1)\nEARTH (2)\nFIRE (3)\nAIR (4)\n");
            int value;
            scanf("%d", &value);
            if (value > 4 || value < 1) {
                printf("Get ahold of yourself and try again\n");
            }
            else {
                barrier = std_insert (barrier, (value == 1) ? WATER : (value == 2) ? EARTH : (value == 3) ? FIRE : AIR);
            }
        }
        break;
        case 3: //Delete
        {
            getchar();
            printf ("Choose what you don't need\nWATER (1)\nEARTH (2)\nFIRE (3)\nAIR (4)\n");
            int value;
            scanf("%d", &value);
            if (value > 4 || value < 1) {
                printf("Get ahold of yourself and try again\n");
            }
            else {
                barrier = std_delete (barrier, (value == 1) ? WATER : (value == 2) ? EARTH : (value == 3) ? FIRE : AIR);
            }
        }
        break;
        case 4: //Size
        {
            getchar();
            std_size (barrier);
        }
        break;
        case 5: //Unstd_act
        {
            getchar();
            printf("Choose what you need the most\nWATER (1)\nEARTH (2)\nFIRE (3)\nAIR (4)\n");
            int value;
            scanf("%d", &value);
            if (value > 4 || value < 1) {
                printf("Get ahold of yourself and try again\n");
            }
            else {
                barrier = unstd_act (barrier, (value == 1) ? WATER : (value == 2) ? EARTH : (value == 3) ? FIRE : AIR);
            }
        }
        break;
        default:
            printf("%s\n", "Try again)");
            break;
        case 6:
            break;
        }
    }
    printf("%s\n", "Goodbye, Avatar");
    return 0;
}
