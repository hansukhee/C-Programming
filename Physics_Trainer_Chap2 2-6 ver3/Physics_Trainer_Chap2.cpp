#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <math.h>
#include <time.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 

#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI

void Excersize_2_6(int solution, int answer)
{

	srand(time(NULL));

	double t = 25 + rand() % (9 + 1) - 4;
	double s = 200 + rand() % (9 + 1) - 4;
	double averge_speed = 0 + rand() % (9 + 1) - 4;
	double d = 0;
	double averge_velocity = 0;

	printf("\n\n");
	printf("2-6 \n");
	printf("달리기 선수가 %6.2lf m 트랙 한바퀴를 %6.2lf s 에 돈다.\n", s, t);
	printf("선수 (a) 평균속력과 (b) 평균속도를 구하여라.\n\n");
	printf("(a) 평균 속력을 구하는 방법은 다음과 같습니다 \n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    풀 이   =============================\n");
		printf("관련공식은 평균속력 = 거리(Δs) / 시간(Δs) 입니다.\n");
		printf("선수의 평균속력을 구하는 공식은 다음과 같습니다.\n\n");

		printf("선수의 평균속력은 다음과 같습니다: averge_speed = Δs / Δt = %6.2lf s / %6.2lf m \n\n", s, t);
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n\n");

		averge_speed = s / t;

		printf("averge_speed = %6.2lf m/s \n\n", averge_speed);

		printf("=================================================================\n\n");

		printf("\n\n\n");
	}

	printf("(b) 선수의 평균 속도를 구하여라. \n\n");
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    풀 이   ============================\n");
		printf("관련공식은 averge_velocity = 원점 (Δd) / 시간 (Δt) 입니다. \n");
		printf("선수의 평균속도를 구하는 공식은 다음과 같습니다.\n\n");

		printf("averge_velocity = Δd / Δt = %6.2lf / %6.2lf \n\n", d, t);
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n\n");

		averge_velocity = d / t;

		printf("averge_velocity = %6.2lf m/s \n", averge_velocity);

		printf("=================================================================\n\n");
		printf("\n\n\n");
	}

}
int main(void)
{

	printf("=================================================================\n");
	printf("======================= Halla University ========================\n");
	printf("======================= Future Mobility  ========================\n");
	printf("======================== Pysics Trainer  ========================\n");
	printf("========================   Chapter 2     ========================\n");
	printf("=================================================================\n");


	Excersize_2_6(1, 1);
}