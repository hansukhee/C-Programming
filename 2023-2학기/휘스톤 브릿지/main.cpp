#include <stdio.h>
#include <math.h>

void main()
{
	double V, R1, R2, R3, R4, VB, VC, VBD, VAB, VAD;

	printf("V= ");
	scanf_s("%lf", &V);

	printf("R1= ");
	scanf_s("%lf", &R1);

	printf("R2= ");
	scanf_s("%lf", &R2);

	printf("R3= ");
	scanf_s("%lf", &R3);

	printf("R4= ");
	scanf_s("%lf", &R4);

	VB = (R2 / (R1 + R2)) * V;
	VC = (R4 / (R3 + R4)) * V;

	printf("VB = %lf\n", VB);
	printf("VC = %lf\n", VC);

	//VBD = VAB - VAD;
	VBD = ((R1 * R3 - R2 * R4) / ((R1 + R2) * (R3 + R4))) * V;

	printf("VBD = %lf\n", VBD);


}