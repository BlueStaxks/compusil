#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	char ch; int key, count;

	FILE* fp = fopen("forcode5_encrypt.bin", "r+");
	if (fp == NULL) {
		fprintf(stderr, "NO FILE!");
		exit(1);
	}

	printf("Enter key.\n");
	scanf("%d", &key);
	while (getchar() != '\n');
	printf("Enter texts to encrypt.\n");
	while ((ch = getchar()) != '\n') {
		ch = (ch + key) % 128;
		count = fwrite((void*)&ch, sizeof(char), 1, fp);
		if (count < 1) {
			fprintf(stderr, "ERROR");
		}
	}

	rewind(fp);
	while (fread((void*)&ch, sizeof(char), 1, fp)) {
		ch = ch - key;
		if (ch < 0)
			ch += 128;
		putchar(ch);
	}
	if (!feof(fp)) {
		fprintf(stderr, "ERROR");
		exit(1);
	}
	fclose(fp);
	return 0;
}