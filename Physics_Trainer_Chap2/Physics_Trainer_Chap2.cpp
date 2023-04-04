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
	printf("고속도로에서 어떤 자동차가 약 %d m/s^2의 가속도를 낼 수 있다.\n\n", accel);
	printf("이 비율로 %d km/h의 속도에서\n", V);
	printf("%d km/h로 가속하는데 걸리는 시간은 얼마나 될까?\n\n", s);
	
	
	
	
}


void Excersize_2_20(int solution, int answer)
{


	int Va = 24;
	int Vb = 20;
	int V0a = 5;
	int V0b = 5;

	printf("\n\n");
	printf("2-20 \n");
	printf("%d m/s로 달리던 자동차 A와\n", Va);
	printf("%d m/s로 달리던 자동차 B가 동시에 브레이크를 밟아 일정하게 감속시켜서 자동차 A는 %d s만에 자동차 B는 %d s만에 정지하였다 \n\n", Vb, V0a, V0b);
	printf("(a) 자동차 A와 B의 가속도의 크기는 각각 얼마일까?\n\n");
	printf("(b) 두 자동차의 속도가 같아지는 때는 브레이크를 밟은 후 몇 초일까?\n\n");
	printf("(c) 브레이크를 밟은 후 정지할 때까지 어떤 자동차가 얼마나 더 걸리는가?\n\n");
	printf("(d) 자동차 A가 B와 같은 비율로 감속시킨다면 정지할 때까지 걸리는 시간은 몇 초인까?\n\n");



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