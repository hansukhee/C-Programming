#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	/////////////////////////////if��/////////////////////////////
	/*float x;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%f", &x);

	if (x >= 90)
	{
		printf("%f�� A", x);
	}
	else if (x >= 80)
	{
		printf("%f�� B", x);
	}
	else if (x >= 70)
	{
		printf("%f�� C", x);
	}
	else if (x >= 60)
	{
		printf("%f�� D", x);
	}
	else
	{
		printf("F");
	}*/

	/////////////////switch��////////////////////
	int x, y;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d ", &x);

	y = x / 10;

	switch (y)
	{
	case 9:
		printf("%d�� A �Դϴ�.", x);
		break;
	case 8:
		printf("%d�� B �Դϴ�.", x);
		break;
	case 7:
		printf("%d�� C �Դϴ�.", x);
		break;
	case 6:
		printf("%d�� D �Դϴ�.", x);
	default:
		printf("%d�� F �Դϴ�.", x);
		break;
	}
}