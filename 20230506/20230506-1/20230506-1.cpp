#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    //////////////////////////////////if��//////////////////////////
    /*int x;

    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &x);

    if (x % 2 == 0)
    {
       printf("%d�� ¦�� �Դϴ�.", x);
    }
    else if (x % 2 != 0)
    {
       printf("%d�� Ȧ�� �Դϴ�", x);
    }
    else
    {
       printf("0�Դϴ�.");
    }*/

    /////////////////////////////////switch��////////////////////////////////////////////
    int y;

    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &y);

    switch (y % 2)
    {
    case 0:
        printf("¦���Դϴ� \n");
        break;
    case 1:
        printf("Ȧ���Դϴ� \n");
    }
}