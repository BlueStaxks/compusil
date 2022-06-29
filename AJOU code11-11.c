#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int i; char ch, * temp;
	char** p = (char**)malloc(2 * sizeof(char*));

	p[1] = p[0] = NULL;
	
	printf("Enter first string.\n");
	for (i = 0; (ch = getchar()) != '\n'; i++) {
		p[0] = (char*)realloc(p[0], sizeof(char) * (i + 2));
		if (p[0] == NULL)
			break;
		p[0][i] = ch;
		p[0][i + 1] = '\0';
	}
	printf("Enter second string.\n");
	for (i = 0; (ch = getchar()) != '\n'; i++) {
		p[1] = (char*)realloc(p[1], sizeof(char) * (i + 2));
		if (p[1] == NULL)
			break;
		p[1][i] = ch;
		p[1][i + 1] = '\0';
	}
	temp = (char*)malloc(100 * sizeof(char));
	for (i = 0; *(p[0] + i) != '\0'; i++)
		*(temp + i) = *(p[0] + i);
	*(temp + i) = '\0';
	for (i = 0; *(p[1] + i) != '\0'; i++)
		*(p[0] + i) = *(p[1] + i);
	*(p[0] + i) = '\0';
	for (i = 0; *(temp + i) != '\0'; i++)
		*(p[1] + i) = *(temp + i);
	*(p[1] + i) = '\0';
	printf("first string became %s, second string became %s.", p[0], p[1]);
	free(p[0]);  //이 free부분이 분명 돼야되는데 여기가 막히네요
	free(p[1]);
	free(p);
	return 0;
}
