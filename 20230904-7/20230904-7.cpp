#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main()
{
	int a, b;
	int* data;
	FILE* fp;
	fp = fopen("data.txt", "r");

	if (fp != NULL)
	{
		fscanf(fp, "%d", &a);
		data = (int*)malloc(sizeof(int) * a);

		for (int b = 0; b < a; b++)
		{
			fscanf(fp, "%d", &data[b]);
		}

		fclose(fp);

		for (int b = 0; b < a; b++)
		{
			printf("data[%d} : %d \n", b, data[b]);
		}
		free(data);
	}

	else
	{
		printf("���� �Է¹ޱ� ���� \n");
	}
}