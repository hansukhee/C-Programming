#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fp1 = NULL, * fp2 = NULL;

	char fname1[100], fname2[100];

	printf("첫번째 파일 이름: ");
	gets_s(fname1);
	fopen_s(&fp1, fname1, "rt");

	printf("두번쨰 파일 이름: ");
	gets_s(fname2);
	fopen_s(&fp2, fname2, "wt");

	if (fp1 = NULL || fp2 = NULL)
	{
		fprintf(stderr, "파일 열기 오류\n");
		exit(1);
	}

	fclose(fp);
}