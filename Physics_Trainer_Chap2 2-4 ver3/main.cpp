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

void Excersize_2_4(int solution, int answer)
{

	srand(time(NULL));

	double t = 6;
	double x = 60;
	double Ev = 10;
	double s = 2;
	double m = 30;
	double v = 0;

	printf("\n\n");
	printf("2-4 \n");
	printf("수평면 위에 정지하고 있던 물체가 한쪽방향으로 직선운동을 할 때\n");
	printf("이동거리와 시간의 관계가 그림 P2-4와 같다. \n");
	printf("(a) 출발하여 %6.2lf s 동안 물체의 평균속력은 몇 m/s인가?(이동거리가 %6.2lf 일때 시간은 %6.2lf 입니다.) \n\n", t, t, x);

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    풀 이   =============================\n");
		printf("관련공식은 평균속력(m/s) = 시간(s) / 거리(m) 입니다. \n");

		printf("t가 0이라고 하면 x는 0이 됩니다. \n");
		printf("t가 %6.2lf 이면 %6.2lf 에서 나오는 좌표계를 보면 x는 %6.2lf 으로로 나와았습니다.", t, t, x);

		printf("%6.2lf s 동안 물체의 평균속력은 다음과 같습니다.\n\n", t);

		printf("Ev = Δs / Δt =  %6.2lf s  - 0 s / %6.2lf  m - 0 m \n", t, x);
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n\n");
		Ev = x / t;
		printf("Ev = %6.2lf m/s \n\n", Ev);
		printf("=================================================================\n\n");
		printf("\n\n\n");
	}

	printf("(b) 출발 후 5 s 때의 순간속력은 몇 m/s 인가? \n\n");
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    풀 이   ============================\n");
		printf("관련공식은 순간속력(m/s) = 시간(s) / 거리(m) 입니다. \n");
		printf("출발 후 5s 일때의 순간속력은 다음과같습니다.\n\n");

		printf("v = 5m - 3m / %6.2lf s - 0 s \n", m);
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n\n");
		v = m / s;
		printf("v = %6.2lf m/s \n\n", v);
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


	Excersize_2_4(1, 1);
}