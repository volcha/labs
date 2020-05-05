#include <stdio.h>
#include <stdlib.h>
#include "../kp_6/data.h"
#include "../kp_6/best.h"
#include "../kp_6/output.h"
#include "../kp_6/re_builder.h"
#include "../kp_6/writer.h"

#define def_function(a)            \
    _Generic((a),                  \
             info_stud             \
             : func_inf_stud(a);   \
             info_pc               \
             : func_inf_pc(a);     \
             info_exam             \
             : func_inf_exam(a);   \
             info_passenger        \
             : func_inf_pass(a);   \
             info_school           \
             : func_inf_school(a); \
             inf_test              \
             : func_inf_test(a);   \
             default               \
             : printf("%s", Errur))

int main(int argc, char *argv[])
{
    if (argc != 1)
    {
        info_stud *new, *tmp;
        int size = sizeof(select_type);
        FILE *stream;
        stream = fopen(__NAME__, "r");
        if (!stream)
        {
            perror("Не удалось открыть файл");
            return 1;
        }
        new = (select_type *)malloc(size);
        fread(new, size, 1, stream);
        new->last = NULL;

        while (!feof(stream) && new->next)
        { //пока eсть файл
            new->next = (select_type *)malloc(size);
            fread(new->next, size, 1, stream);
            new->next->last = new;
            new = new->next;
        }
        fclose(stream);
        new->next = NULL;
        printf("Extracting...................OK\n");

        info_stud *root_tmp = NULL;
        root_tmp = new;
        printf("%s\n", "Welcome!");
        if (root_tmp)
        {
            if (argv[1][0] == '-' && argv[1][1] == 'f')
            {
                while (root_tmp->last)
                {
                    root_tmp = root_tmp->last;   
                }
                output_stud(root_tmp);

                getchar();
                printf("%s", "Goodbye!");
                return 0;
            }
            else if (argv[1][0] == '-' && argv[1][1] == 'p')
            {
                best (root_tmp);
                getchar();
                printf("%s", "Goodbye!");
                return 0;
            }
            else
            {
                printf("%s", "Errur at command line");
            }
        }
        else
        {
            printf("%s", "Dtabase is empty menu");
        }
    }
    else
    {
        printf("%s", "Errur at command line");
    }
    return 0;
}
