#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    char x;

    printf("�����ڸ� �Է��Ͻÿ�: ");
    scanf("%c", &x);

    if (x = 'A' && x <= 'Z')
    {
        printf("%c�� �빮���Դϴ�.\n", x);
    }
    else if (x >= 'a' && x <= 'z')
    {
        printf("%c�� �ҹ����Դϴ�.\n", x);
    }
    else
    {
        printf("�����ڰ� �ƴմϴ�.\n");

    }
}