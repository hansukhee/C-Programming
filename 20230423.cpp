#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define SEED_MONEY 1000000

int main(void)
{
	/*int i = 0;

	while (i < 5)  //�ݺ�����
	{
		printf("Hello World! \n"); //�ݺ�����
		i++;
	}

	return 0;

	int n;
	int i = 1;

	printf("����ϰ� ���� ��: ");
	scanf("%d", &n);
	while (i <= 9)
	{
		printf("%d * %d = %d \n", n, i, n * i);
		i++;
	}
	return 0;

	
	int n;

	printf("==============================\n");
	printf("          n            n�� ����");
	printf("==============================\n");

	n = 1;
	while (n <= 10)
	{
		printf("%5d  %5d\n", n, n * n);
		n++;
	}

	return 0;
	
	int i, n, sum;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", & n);

	i = 1;
	sum = 0;

	while (i <= n)
	{
		sum += i;  // sum + sum + i;�� ����.
		i++;       // i = i + 1�� ����.
	}

	printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum);
	return 0;
	
	int i, n, sum;

	i = 0;
	sum = 0;
	while (i < 5)
	{
		printf("���� �Է��Ͻÿ�: ");
		scanf("%d", &n);
		sum = sum + n;
		i++;
	}
	printf("�հ�� %d�Դϴ�.\n", sum);

	return 0;
	
	
	int grade, n;
	double sum, average;

	// �ʿ��� �������� �ʱ�ȭ �Ѵ�.
	n = 0;
	sum = 0;
	grade = 0;

	printf("�����Ϸ��� ������ �Է��Ͻÿ�\n");

	//������ �Է¹޾Ƽ� �հ踦 ���ϰ� �л� ���� ����.
	while (grade >= 0)
	{
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &grade);

		sum += grade;
		n++;
	}

	sum = sum - grade;
	n--;
	// ����� ����ϰ� ȭ�鿡 ����Ѵ�.
	average = sum / n;
	printf("������ ����� %f �Դϴ�.\n", average);

	return 0;

	
	int x, y, r;

	printf("�� ���� ������ �Է��Ͻÿ�(ū��, ������): ");
	scanf("%d %d", &x, &y);

	while (y != 0)
	{
		r = x % y;
		x = y;
		y = r;
	}

	printf("�ִ� ������� %d �Դϴ�.\n", x);

	return 0;

	
    int halflife;
	double initial;
	double current;
	int years = 0;

	printf("�ݰ��⸦ �Է��Ͻÿ�(��): ");
	scanf("%d", &halflife);

	initial = 100.0;
	current = initial;
	while (current > initial / 10.0)
	{
		years += halflife;
		current = current / 2.0;
		printf("%d�� �Ŀ� ���� �� = %f\n", years, current);
	}
	printf("1/10 ���Ϸ� �Ǳ���� �ɸ� �ð� = %d��\n", years);
	return 0;
	
	
    int number, sum = 0;



	do        // ���� ��ü�� ��� �ѹ��� ����ȴ�.
	{
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &number);
		sum += number;
	} while (number != 0);

	printf("���ڵ��� �� = %d \n", sum);
	return 0;


    srand((unsigned)time(NULL));    // ���� �߻��� �õ� ����


	int answer = rand() % 100 + 1;  // ������ ������ �߻��Ѵ�.
	int guess;
	int tries = 0;
	// �ݺ�����
	do
	{
		printf("������ �����Ͽ� ���ÿ�:");
		scanf("%d", &guess);
		tries++;

		if (guess > answer)   // ����ڰ� �Է��� ������ ���亸�� ������
			printf("HIGH \n");
		if (guess < answer)   // ����ڰ� �Է��� ������ ���亸�� ������
			printf("LOW \n");
	} while (guess != answer);

	printf("�����մϴ�. �õ�Ƚ�� = %d\n", tries);
	return 0;
	
	
    long fact = 1;
	int i, n;
	printf("������ �Է��Ͻÿ�: ");
	scanf(" %d", &n);

	for (i = 1; i <= n; i++)
	{
		fact = fact * i;
		i++
	}

	printf("%d!�� %d �Դϴ�.\n", n, fact);

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
	printf("%d��\n", year);
	return 0;


    double v;

	while (1)
	{
		printf("�Ǽ����� �Է��Ͻÿ�: ");
		scanf("%lf", &v);

		if (v < 0.0)
			break;

		printf("%f�� �������� %f�Դϴ�.\n", v, sqrt(v));
	}

	return 0;

	
    int x, y;
	int _kbhit(void);
	int OUT;

	for (y = 1; y < 10000; y++)   // ��ø ����
	{
		for (x = 1; x < 10; x++)
		{
			if (_kbhit())  //Ű�� �������� OUT���� ����
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
	printf("�ݺ�Ƚ��");
	scanf("%d", &loop_count);

	while (loop_count > 0)
	{
		sum = sum + divident / divisor;
		divident = -1.0 * divident;
		divisor = divisor + 2;
		loop_count--;
	}
	printf("���̰� = %f\n", sum);
	return 0;

	
    int i, years;
	double total, rate, investemt;

	printf("����: ");
	scanf(" %lf", &investemt);
	printf("����(%%): ");
	scanf("%lf", &rate);
	printf("�Ⱓ(��):");
	scanf("%d", &years);

	printf("===================================\n");
	printf("���� ������\n");
	printf("===================================\n");
	total = investemt;
	rate /= 100.0;
	for (i = 0; i < years; i++)
	{
		total = total * (i + rate);    // ���ο� ������ ���
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
			printf("�¾ҽ��ϴ�.\n");
		else
			printf("Ʋ�Ƚ��ϴ�.\n");
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

	printf("�ʱ� �ݾ� $%d \n", initial_money);
	printf("��ǥ �ݾ� $%d \n", goal);
	printf("100�� �߿��� %d�� ���� \n", wins);
	return 0;*/







}