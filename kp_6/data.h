#ifndef DATA_H
#define DATA_H
#include <stdio.h>
#include <stdlib.h>
#define str(a) char a[20];

#define info_school struct info_school
#define FNP struct FNP
typedef info_school
{
    FNP
    {
        str(last_name);
        char first_name;
        char patronymic;
    }
    full_name;
    enum sex
    {
        F,
        M
    } this_sex;
    int class_num;
    char lit_class;
    str(University);
    str(work);
    str(army);
    info_school *next;
    info_school *last;
}
puple;

#define select_type info_school

#endif
