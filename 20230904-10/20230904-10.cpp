#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fp1 = NULL, * fp2 = NULL;

	char fname1[100], fname2[100];

	printf("ù��° ���� �̸�: ");
	gets_s(fname1);
	fopen_s(&fp1, fname1, "rt");

	printf("�ι��� ���� �̸�: ");
	gets_s(fname2);
	fopen_s(&fp2, fname2, "wt");

	if (fp1 = NULL || fp2 = NULL)
	{
		fprintf(stderr, "���� ���� ����\n");
		exit(1);
	}

	fclose(fp);
}