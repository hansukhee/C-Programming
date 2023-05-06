#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	/////////////////////////////if문/////////////////////////////
	/*float x;

	printf("점수를 입력하시오: ");
	scanf("%f", &x);

	if (x >= 90)
	{
		printf("%f는 A", x);
	}
	else if (x >= 80)
	{
		printf("%f는 B", x);
	}
	else if (x >= 70)
	{
		printf("%f는 C", x);
	}
	else if (x >= 60)
	{
		printf("%f는 D", x);
	}
	else
	{
		printf("F");
	}*/

	/////////////////switch문////////////////////
	int x, y;

	printf("점수를 입력하시오: ");
	scanf("%d ", &x);

	y = x / 10;

	switch (y)
	{
	case 9:
		printf("%d는 A 입니다.", x);
		break;
	case 8:
		printf("%d는 B 입니다.", x);
		break;
	case 7:
		printf("%d는 C 입니다.", x);
		break;
	case 6:
		printf("%d는 D 입니다.", x);
	default:
		printf("%d는 F 입니다.", x);
		break;
	}
}