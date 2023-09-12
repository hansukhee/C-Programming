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

    printf("����, ���� �ռ� ���� ����� �����Ͻÿ�(����: 1, ����: 2): ");
    scanf_s("%d", &select);

    if (select != 1 && select != 2)
    {
        printf("�ùٸ� �������� �ƴմϴ�. ���α׷��� �����մϴ�.\n");
        return 1;
    }
    else if (select == 1)
    {
        printf("���� ������ �����Ͽ����ϴ�. \n");
    }
    else
    {
        printf("���������� �����Ͽ����ϴ�.\n");
    }

    printf("\n");
    printf("������ ������ �����ϼ���.(�ִ�10��): ");
    scanf_s("%d", &resistor_num);

    if (resistor_num <= 0 || resistor_num > MAX_NO_RESISTOR) 
    {
        printf("�ùٸ� ������ �ƴմϴ�. ���α׷��� �����մϴ�.\n");
        return 1;
    }


    for (int i = 0; i < resistor_num; i++)
    {
        printf("���� R%d�� ���� �Է��ϼ���: ", i + 1);
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

    printf("�ռ����� ��: %.2lf\n", total_resistor);

    return 0;
}