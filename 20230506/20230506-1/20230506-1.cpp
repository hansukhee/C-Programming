#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    //////////////////////////////////if문//////////////////////////
    /*int x;

    printf("정수를 입력하시오: ");
    scanf("%d", &x);

    if (x % 2 == 0)
    {
       printf("%d는 짝수 입니다.", x);
    }
    else if (x % 2 != 0)
    {
       printf("%d는 홀수 입니다", x);
    }
    else
    {
       printf("0입니다.");
    }*/

    /////////////////////////////////switch문////////////////////////////////////////////
    int y;

    printf("정수를 입력하시오: ");
    scanf("%d", &y);

    switch (y % 2)
    {
    case 0:
        printf("짝수입니다 \n");
        break;
    case 1:
        printf("홀수입니다 \n");
    }
}