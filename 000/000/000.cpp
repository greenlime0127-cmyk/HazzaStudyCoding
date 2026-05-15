#include <stdio.h>

int main()
{

	float weight;
	printf("당신의 몸무게를 입력하십시오.");
	scanf_s("%f", &weight);

	printf("당신의 몸무게 : %f\n", weight);

	float stature;
	printf("당신의 키를 입력하십시오.");
	scanf_s("%f", &stature);

	printf("당신의 키 : %f\n", stature);

	float staturem;
	staturem = stature / 100.0;

	float bmi;
	bmi = weight / (staturem * staturem);

	printf("당신의 신체질량지수 : %f\n", bmi);

}