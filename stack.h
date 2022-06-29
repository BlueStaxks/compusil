#pragma once
typedef struct {
	int line[10];     //예제와는 약간 다름
	int p;
} stackType;

void init(stackType* s) {
	(*s).p = 0;
	int i;
	for (i = 0; i < 10; ++i)
		(*s).line[i] = 0;
}

void push(stackType* s) {
	(*s).line[(*s).p] = 1;
	((*s).p)++;
}

void pop(stackType* s) {
	((*s).p)--;
	(*s).line[(*s).p] = 0;
}