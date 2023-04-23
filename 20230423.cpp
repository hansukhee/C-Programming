#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define SEED_MONEY 1000000

int main(void)
{
	/*int i = 0;

	while (i < 5)  //반복조건
	{
		printf("Hello World! \n"); //반복내용
		i++;
	}

	return 0;

	int n;
	int i = 1;

	printf("출력하고 싶은 단: ");
	scanf("%d", &n);
	while (i <= 9)
	{
		printf("%d * %d = %d \n", n, i, n * i);
		i++;
	}
	return 0;

	
	int n;

	printf("==============================\n");
	printf("          n            n의 제곱");
	printf("==============================\n");

	n = 1;
	while (n <= 10)
	{
		printf("%5d  %5d\n", n, n * n);
		n++;
	}

	return 0;
	
	int i, n, sum;

	printf("정수를 입력하시오: ");
	scanf("%d", & n);

	i = 1;
	sum = 0;

	while (i <= n)
	{
		sum += i;  // sum + sum + i;와 같다.
		i++;       // i = i + 1과 같다.
	}

	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);
	return 0;
	
	int i, n, sum;

	i = 0;
	sum = 0;
	while (i < 5)
	{
		printf("값을 입력하시오: ");
		scanf("%d", &n);
		sum = sum + n;
		i++;
	}
	printf("합계는 %d입니다.\n", sum);

	return 0;
	
	
	int grade, n;
	double sum, average;

	// 필요한 변수들을 초기화 한다.
	n = 0;
	sum = 0;
	grade = 0;

	printf("종료하려면 음수를 입력하시오\n");

	//성적을 입력받아서 합계를 구하고 학생 수를 샌다.
	while (grade >= 0)
	{
		printf("성적을 입력하시오: ");
		scanf("%d", &grade);

		sum += grade;
		n++;
	}

	sum = sum - grade;
	n--;
	// 평균을 계산하고 화면에 출력한다.
	average = sum / n;
	printf("성적의 평균은 %f 입니다.\n", average);

	return 0;

	
	int x, y, r;

	printf("두 개의 정수를 입력하시오(큰수, 작은수): ");
	scanf("%d %d", &x, &y);

	while (y != 0)
	{
		r = x % y;
		x = y;
		y = r;
	}

	printf("최대 공약수는 %d 입니다.\n", x);

	return 0;

	
    int halflife;
	double initial;
	double current;
	int years = 0;

	printf("반감기를 입력하시오(년): ");
	scanf("%d", &halflife);

	initial = 100.0;
	current = initial;
	while (current > initial / 10.0)
	{
		years += halflife;
		current = current / 2.0;
		printf("%d년 후에 남은 양 = %f\n", years, current);
	}
	printf("1/10 이하로 되기까지 걸린 시간 = %d년\n", years);
	return 0;
	
	
    int number, sum = 0;



	do        // 루프 몸체가 적어도 한번은 실행된다.
	{
		printf("정수를 입력하시오: ");
		scanf("%d", &number);
		sum += number;
	} while (number != 0);

	printf("숫자들의 합 = %d \n", sum);
	return 0;


    srand((unsigned)time(NULL));    // 난수 발생기 시드 설정


	int answer = rand() % 100 + 1;  // 정답을 난수로 발생한다.
	int guess;
	int tries = 0;
	// 반복구조
	do
	{
		printf("정답을 추측하여 보시오:");
		scanf("%d", &guess);
		tries++;

		if (guess > answer)   // 사용자가 입력한 정수가 정답보다 높으면
			printf("HIGH \n");
		if (guess < answer)   // 사용자가 입력한 정수가 정답보다 낮으면
			printf("LOW \n");
	} while (guess != answer);

	printf("축하합니다. 시도횟수 = %d\n", tries);
	return 0;
	
	
    long fact = 1;
	int i, n;
	printf("정수를 입력하시오: ");
	scanf(" %d", &n);

	for (i = 1; i <= n; i++)
	{
		fact = fact * i;
		i++
	}

	printf("%d!은 %d 입니다.\n", n, fact);

	return 0;

	
	int x, y;
	
	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 10; x++)
		{
			printf("*");
			printf("\n");
		}
	}

	return 0;

	
    int a, b, c;
	for (a = 1; a <= 100; a++) {
		for (b = 1; b <= 100; b++) {
			for (c = 1; c <= 100; c++) {
				if ((a * a + b * b) == c * c)
					printf("%d %d %d \n", a, b, c);
			}
		}
	}

	return 0;

	
    int year = 0, money = SEED_MONEY;

	while (1)
	{
		year++;
		money = money * (1 + 0.30);
		if (money > 10 * SEED_MONEY)
			break;
	}
	printf("%d년\n", year);
	return 0;


    double v;

	while (1)
	{
		printf("실수값을 입력하시오: ");
		scanf("%lf", &v);

		if (v < 0.0)
			break;

		printf("%f의 제곱근은 %f입니다.\n", v, sqrt(v));
	}

	return 0;

	
    int x, y;
	int _kbhit(void);
	int OUT;

	for (y = 1; y < 10000; y++)   // 중첩 루프
	{
		for (x = 1; x < 10; x++)
		{
			if (_kbhit())  //키가 눌러지면 OUT으로 점프
				goto OUT;
			printf("*");
		}
		printf("\n");
	}

	OUT;

	return 0;

	
    int i;

	for (i = 0; i < 10; i++)
	{
		if (i % 3 == 0)
			continue;
		printf("%d", i);
	}
	return 0;

	
    double divisor, divident, sum;
	int loop_count;

	divisor = 1.0;
	divident = 4.0;
	sum = 0.0;
	printf("반복횟수");
	scanf("%d", &loop_count);

	while (loop_count > 0)
	{
		sum = sum + divident / divisor;
		divident = -1.0 * divident;
		divisor = divisor + 2;
		loop_count--;
	}
	printf("파이값 = %f\n", sum);
	return 0;

	
    int i, years;
	double total, rate, investemt;

	printf("원금: ");
	scanf(" %lf", &investemt);
	printf("이율(%%): ");
	scanf("%lf", &rate);
	printf("기간(년):");
	scanf("%d", &years);

	printf("===================================\n");
	printf("연도 원리금\n");
	printf("===================================\n");
	total = investemt;
	rate /= 100.0;
	for (i = 0; i < years; i++)
	{
		total = total * (i + rate);    // 새로운 원리금 계산
	    printf("%2d %10.lf\n", i + 1, total);
	}
	return 0;

	
    srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		printf("%d \n", rand());
	}

    
    int x, y, answer, i;
	srand((unsigned)time(NULL));

	for (i = 0; i < 10; i++)
	{
		x = rand() % 10;
		y = rand() % 10;
		printf("%d + %d = ", x, y);
		scanf("%d", &answer);
		if (x + y == answer)
			printf("맞았습니다.\n");
		else
			printf("틀렸습니다.\n");
	}
	return 0

    
    int initial_money = 50;
	int goal = 250;
	int i;
	int wins = 0;


	srand((unsigned)time(NULL));
	for (i = 0; i < 100; i++)
	{
		int cash = initial_money;
		while (cash > 0 && cash < goal)
		{
			if ((double)rand() / RAND_MAX < 0.5)cash;
			else       cash--;
		}
		if (cash == goal) wins++;
	}

	printf("초기 금액 $%d \n", initial_money);
	printf("목표 금액 $%d \n", goal);
	printf("100번 중에서 %d번 성공 \n", wins);
	return 0;*/







}