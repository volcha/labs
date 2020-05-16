#include "deque.h"
#include <stdlib.h>
#include <stdio.h>
#include "deque.c"

void menu() {
	printf("'1'-Cоздаем Deque '2'-Распечатать Deque '3'-Найти максимум\n");
	printf("'4'-Сортировка '5'-Завершение работы программы\n");
}

int main() {
	menu();
	Deque de;
	d_create(&de);
	char command='#';
	Item I;
	int m;
	while(command != '5') {
		scanf("%c", &command);
		fflush(stdin);
		switch (command) {
		case '1':
		de.size=0;
		printf("Enter pair <key> <value>: ");
		for (int h=1;h<=5;h++) {
			scanf ("%d%d",&I.key,&I.value);
			d_push_back(&de,I);
		}
		menu();
		break;
		case '2':
		d_print(&de);
		menu();
		break;
		case '3':
		m = d_searchmax(&de);
		printf("Максимальное число равно : %d", m);
		break;
		case '4':
		d_sort(&de);
		d_print(&de);
		menu();
		break;
		case '5': break;
		case ' ':break;
		case '\n':break;
		default:
		printf("Such command is not in menu.\n");
		break;
		}
	}
}
