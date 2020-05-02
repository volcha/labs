#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include "../kp_6/data.h"

void writer(select_type stru)//тип вводимой переменной
{				 
    FILE *base = fopen(__NAME__, "w+");//Открываем файл 
    if (!base)
    {
        perror("Can't open file");//Если не удалось открыть файл выводим ошибку и ломаем программу
	return;
    }
	    fwrite(&stru, sizeof(stru), 1, base);//записываем 
    fclose(base);
    return;
}
