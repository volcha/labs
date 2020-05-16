#include <stdlib.h>
#include <stdio.h>
#include "deque.h"

void d_create (Deque* d){
	d->size=0;
}

void d_push_back(Deque* d, Item i){
	if(d->size<10){
		if(d->size==0){
			d->front=0;
			d->back=0;
		}
		else {
			d->back=(d->back+1)%10;
		}
		d->data[d->back]=i;
		d->size++;
	}
	else {
		printf("Haven't free place\n");
	}
}

void d_print (const Deque* d){
	int i=d->front;
	int s=d->size;
	printf("<");
	while(s>0) {
		printf("(%d, %d)",d->data[i].key,d->data[i].value);
		i=(i+1)%10;
		s--;
	}
	printf(">\n");
}

int d_searchmax (const Deque* d){
	int i=d->front;
	int s=d->size;
	int max = 0 ;
	while(s>0){
		if (d->data[i].value>max){
			max = d->data[i].value;
		}
		i=(i+1) % 10;
		s--;
	}
	return max;
}

void d_sort (Deque* d) {
	int i=d->front;
	int s=d->size;
	int k,j,x;
	for(int i = 0;i < s - 1; i++) {
		x=d->data[i].value;
		k=i;
		for(int j = i + 1; j < s; j++) {
			if(d->data[j].value < x) {
				k=j;
				x=d->data[j].value;
			}
			d->data[k].value = d->data[i].value;
			d->data[i].value = x;
		}
	}
}
