#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "../kp_6/data.h"
#include "../kp_6/output.h"
#include "../kp_6/re_builder.h"

const int N = 12;

void best (info_stud *tmp) {
	int markss[12] = {0};
        int students[12] = {0};
	while (tmp) {
		if (tmp->sex_stud == 'F') {
			markss[tmp->group_num] += tmp->mks.ez.ma;
			markss[tmp->group_num] += tmp->mks.ez.hi;
			markss[tmp->group_num] += tmp->mks.ez.dm;
			markss[tmp->group_num] += tmp->mks.ez.cs;
			students[tmp->group_num] += 1;
		}
		tmp = tmp->next;
	}
	float max_marks = 0;
	int max_gr;
	for (int i = 1; i <= N; i++) {
		if (students[i] > 0) {
			if (markss[i]/students[i] > max_marks) {
				max_marks = markss[i]/students[i];
				max_gr = i;
			}
		}
	}
        if (max_marks == 0) {
		printf ("%s\n", "Didn't found students");
	}
        else {
		printf ("%d\n", max_gr);
	}
}
