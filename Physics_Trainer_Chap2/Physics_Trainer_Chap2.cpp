#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 

void Excersize_2_10(int solution, int answer)
{

	int accel = 1.7;
	int V = 90;
	int s = 110;
	

	printf("\n\n");
	printf("2-10 \n");
	printf("��ӵ��ο��� � �ڵ����� �� %d m/s^2�� ���ӵ��� �� �� �ִ�.\n\n", accel);
	printf("�� ������ %d km/h�� �ӵ�����\n", V);
	printf("%d km/h�� �����ϴµ� �ɸ��� �ð��� �󸶳� �ɱ�?\n\n", s);
	
	
	
	
}


void Excersize_2_20(int solution, int answer)
{


	int Va = 24;
	int Vb = 20;
	int V0a = 5;
	int V0b = 5;

	printf("\n\n");
	printf("2-20 \n");
	printf("%d m/s�� �޸��� �ڵ��� A��\n", Va);
	printf("%d m/s�� �޸��� �ڵ��� B�� ���ÿ� �극��ũ�� ��� �����ϰ� ���ӽ��Ѽ� �ڵ��� A�� %d s���� �ڵ��� B�� %d s���� �����Ͽ��� \n\n", Vb, V0a, V0b);
	printf("(a) �ڵ��� A�� B�� ���ӵ��� ũ��� ���� ���ϱ�?\n\n");
	printf("(b) �� �ڵ����� �ӵ��� �������� ���� �극��ũ�� ���� �� �� ���ϱ�?\n\n");
	printf("(c) �극��ũ�� ���� �� ������ ������ � �ڵ����� �󸶳� �� �ɸ��°�?\n\n");
	printf("(d) �ڵ��� A�� B�� ���� ������ ���ӽ�Ų�ٸ� ������ ������ �ɸ��� �ð��� �� ���α�?\n\n");



}




int main(void)
{

	printf("=================================================================\n");
	printf("======================= Halla University ========================\n");
	printf("======================= Future Mobility  ========================\n");
	printf("======================== Pysics Trainer  ========================\n");
	printf("========================   Chapter 2     ========================\n");
	printf("=================================================================\n");


	Excersize_2_10(0,0);
	Excersize_2_20(0, 0);


}