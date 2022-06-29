#pragma once
#include <stdlib.h>
typedef struct {    //예제와 좀 다름
	int* line;
	int p;
} stackType2;

void init(stackType2* s) {
	(*s).p = 0;
	(*s).line = (int*)calloc(1, sizeof(int));
}

void push(stackType2* s) {
	realloc((*s).line, sizeof(int) * ((*s).p + 1));
	(*s).line[(*s).p] = 1;
	((*s).p)++;
}

void pop(stackType2* s) {
	((*s).p)--;
	(*s).line[(*s).p] = 0;
}