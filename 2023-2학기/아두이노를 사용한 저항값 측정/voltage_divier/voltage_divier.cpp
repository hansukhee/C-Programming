#include <stdio.h>

void main()
{
    double voltage = 5.0;
    double resistance1 = 0.0;
    double voltage_out = 0;

    printf("����1�� ���� �Է��ϼ���: ");
    scanf_s("%lf", &resistance1);
    printf("\n");


    printf("(�Ҽ��� �� �����ּž� ��Ȯ�� ���ɴϴ�.)\n V_out �� �Է�: ");
    scanf_s("%lf", &voltage_out);
    printf("\n");

    double resistance2 = (resistance1 * voltage_out) / (voltage - voltage_out);
    printf("����2�� ���� %.2lf ��(��) �Դϴ�. ", resistance2);
}