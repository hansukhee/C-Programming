#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 

void Excersize_2_10(int solution, int answer)
{

	double acce1 = 1.7;
	double V = 90;
	double s = 110;
	

	printf("\n\n");
	printf("2-10 \n");
	printf("��ӵ��ο��� � �ڵ����� �� %lf m/s^2�� ���ӵ��� �� �� �ִ�.\n\n", accel1;
	printf("�� ������ %lf km/h�� �ӵ�����\n\n", V);
	printf("%lfkm/h �� �����ϴ� �� �ɸ��� �ð��� �󸶳� �ɱ�?\n\n", s);
	
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf("���� ������ ���ӵ��� ���ϴ� �����̴�.\n");
		printf("1.7m/s^2�� �Ŀ� �̿�.\n");



		printf("=================================================================\n");
	}
		
	
}


void Excersize_2_20(int solution, int answer)
{
	double Va = 24.0;
	double Vb = 20.0;
	double V0a = 4.0;
	double V0b = 5.0;

	printf("\n\n");
	printf("2-20 \n");
	printf("%lf m/s�� �޸��� �ڵ��� A��\n\n", Va);
	printf("%lf m/s�� �����ϴ� �ڵ��� B�� ���ÿ� �극��ũ�� ��� �����ϰ� ���ӽ��Ѽ� �ڵ��� A�� %lf s����, �ڵ��� B�� %lf s���� �����ߴ�.  \n\n", Vb, V0a, V0b);


	printf("(a) �ڵ��� A�� B�� ���ӵ��� ũ��� ���� ���ϱ�? \n\n");
	printf("(b) �� �ڵ����� �ӵ��� �극��ũ�� ���� �� ���� �� �ϱ�? \n\n");
	printf("(c) �극��ũ�� ���� �� �����Ҷ����� � �ڵ����� �󸶳� �� �ָ����°�? \n\n");
	printf("(d) �ڵ��� B�� A�� ���� ������ ���ӽ�Ų�ٸ� �����Ҷ����� �ɸ��� �ð��� �����ϱ�? \n\n");
	
	
	
}



int main(void)
{

	printf("=================================================================\n");
	printf("======================= Halla University ========================\n");
	printf("======================= Future Mobility  ========================\n");
	printf("======================== Pysics Trainer  ========================\n");
	printf("========================   Chapter 2     ========================\n");
	printf("=================================================================\n");


	Excersize_2_10(1,0);
	Excersize_2_20(1, 0);



}