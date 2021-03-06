/*
Программа создаёт цепочку ненулевых элементов в векторе А со строчным индексированием
Доступные операции: 
1. Enter - ввод матрицы (если есть старая, то она удаляется)
2. Output - вывод в обычном виде и виде схемы размещения
3. Function - функция (вычисление суммы двух разреженных матриц и проверка, не является ли полученная матрица симметричной)
*/

#include <stdio.h>
#include <stdlib.h>

#include "data.h"

int menu(void) {
    printf("%s\n", "1. Enter");
    printf("%s\n", "2. Output");
    printf("%s\n", "3. Function number 6");
    printf("%s\n", "4. Exit");
    int ans;
    scanf("%d", &ans);
    return ans;
}

int main() {
    struct cell *matrix = NULL;
    printf("%s\n", "Welcome");
    int k = 0;
    while (k != 4) {
        k = menu();
        switch (k)
        {
        case 1: //Enter
        {
            getchar();
            matrix = enter (matrix);
        }
        break;
        case 2: //Output
        {
            getchar();
            output (matrix);
        }
        break;
        case 3: //Function
        {
            getchar();
            function (matrix);
        }
        break;
        default:
            printf("%s\n", "Try again)");
            break;
        case 4:
            break;
        }
    }
    printf("%s\n", "Goodbye");
    return 0;
}
