#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE* fp1 = fopen("forcode3_1first.txt", "rt");
	if (fp1 == NULL) {
		fprintf(stderr, "NO FILE!");
		exit(1);
	}
	FILE* fp2 = fopen("forcode3_2second.txt", "rt");
	if (fp2 == NULL) {
		fprintf(stderr, "NO FILE!");
		exit(1);
	}
	FILE* fp3 = fopen("forcode3_3merge.txt", "w");
	int i;
	char t[1000];
	for (i = 0; fgets(t, 1000, fp1) != NULL; ++i)
		fputs(t, fp3);
	for (i = 0; fgets(t, 1000, fp2) != NULL; ++i)
		fputs(t, fp3);
	return 0;
}