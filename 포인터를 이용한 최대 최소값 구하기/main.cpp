#include <stdio.h>

void min_max(int* a1, int* b1, int* c1, int* min, int* max)
{
    if (*a1 <= *b1 && *a1 <= *c1)
        *min = *a1;
    else if (*b1 <= *a1 && *b1 <= *c1)
        *min = *b1;
    else
        *min = *c1;

    if (*a1 >= *b1 && *a1 >= *c1)
        *max = *a1;
    else if (*b1 >= *a1 && *b1 >= *c1)
        *max = *b1;
    else
        *max = *c1;
}

int main()
{
    int a, b, c;
    int min, max;

    printf("세 정수를 입력하세요: ");
    scanf_s("%d %d %d", &a, &b, &c);

    min_max(&a, &b, &c, &min, &max);

    printf("최소값: %d\n", min);
    printf("최대값: %d\n", max);

    return 0;
}