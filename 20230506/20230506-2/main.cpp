#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    char x;

    printf("영문자를 입력하시오: ");
    scanf("%c", &x);

    if (x = 'A' && x <= 'Z')
    {
        printf("%c는 대문자입니다.\n", x);
    }
    else if (x >= 'a' && x <= 'z')
    {
        printf("%c는 소문자입니다.\n", x);
    }
    else
    {
        printf("영문자가 아닙니다.\n");

    }
}