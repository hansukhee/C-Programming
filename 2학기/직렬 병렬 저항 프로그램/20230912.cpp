#include <stdio.h>


#define MAX_NO_RESISTOR 10

double resistor[MAX_NO_RESISTOR] = { 0.0, };

double serial_resistor_calculator(int resistor_num)
{
    double total_resistor = 0.0;

    for (int i = 0; i < resistor_num; i++)
    {
        total_resistor += resistor[i];
    }

    return total_resistor;
}

double parallel_resistor_calculator(int resistor_num)
{
    double total_resistor = 0.0;

    for (int i = 0; i < resistor_num; i++)
    {
        total_resistor += 1.0 / resistor[i];
    }

    return 1.0 / total_resistor;
}

int main(void)
{
    int select;
    int resistor_num = 0;
    double total_resistor;

    printf("직렬, 병렬 합성 저항 계산을 선택하시오(직렬: 1, 병렬: 2): ");
    scanf_s("%d", &select);

    if (select != 1 && select != 2)
    {
        printf("올바른 선택지가 아닙니다. 프로그램을 종료합니다.\n");
        return 1;
    }
    else if (select == 1)
    {
        printf("직렬 저항을 선택하였습니다. \n");
    }
    else
    {
        printf("병렬저항을 선택하였습니다.\n");
    }

    printf("\n");
    printf("저항의 개수를 선택하세요.(최대10개): ");
    scanf_s("%d", &resistor_num);

    if (resistor_num <= 0 || resistor_num > MAX_NO_RESISTOR) 
    {
        printf("올바른 개수가 아닙니다. 프로그램을 종료합니다.\n");
        return 1;
    }


    for (int i = 0; i < resistor_num; i++)
    {
        printf("저항 R%d의 값을 입력하세요: ", i + 1);
        scanf_s("%lf", &resistor[i]);
    }

    if (select == 1)
    {
        total_resistor = serial_resistor_calculator(resistor_num);
    }
    else
    {
        total_resistor = parallel_resistor_calculator(resistor_num);
    }

    printf("합성저항 값: %.2lf\n", total_resistor);

    return 0;
}