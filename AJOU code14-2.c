#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	char text[10][100];
	char buff[100];
	int i, j;

	FILE* fp = fopen("forcode2.txt", "rt"); //이 파일이 이미 존재하고 이미 3줄의 문장이 있는 것으로 간주했습니다
	if (fp == NULL) {
		fprintf(stderr, "NO FILE!");
		exit(1);
	}
	for (i = 0; fgets(buff, 100, fp) != NULL; i++)
		strcpy(text[i], buff);
	if (!feof(fp)) {
		fprintf(stderr, "ERROR");
		exit(1);
	}
	for (j = i - 1; j >= 0; j--)
		printf("%s",text[j]); //화면에 출력하라면서 왜 fputs를 쓰라는건지 모르겠다. 그냥 printf로 함
	fclose(fp);
	return 0;
}