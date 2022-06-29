#pragma once
#include <stdlib.h>
typedef struct {    //예제와 좀 다름
	char* line;
	int p;
} stackType3;

void init(stackType3* s) {
	(*s).p = 0;
	(*s).line = (char*)calloc(1, sizeof(char));
}

void push(stackType3* s, char c) {
	realloc((*s).line, sizeof(char) * ((*s).p + 1));
	(*s).line[(*s).p] = c;
	((*s).p)++;
}

void pop(stackType3* s) {
	((*s).p)--;
	(*s).line[(*s).p] = 0;
}