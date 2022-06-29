#pragma once
#include <stdlib.h>
typedef struct {
	int* line;
	int p;
} stackType4;

void init(stackType4* s) {
	(*s).p = 0;
	(*s).line = (int*)calloc(1, sizeof(int));
}

void push(stackType4* s, int c) {
	realloc((*s).line, sizeof(int) * ((*s).p + 1));
	(*s).line[(*s).p] = c;
	((*s).p)++;
}

void pop(stackType4* s) {
	((*s).p)--;
	(*s).line[(*s).p] = 0;
}

int top(stackType4* s) {
	((*s).p)--;
	int t = (*s).line[(*s).p];
	((*s).p)++;
	return t;
}