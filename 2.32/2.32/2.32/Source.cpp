#include<stdio.h>

int main()
{
	float weight, height,BMI;
	printf("請輸入體重(kg):");
	scanf_s("%f",&weight);
	printf("請輸入身高(m):");
	scanf_s("%f", &height);
	BMI = weight / (height * height);
	printf("你的BMI為%0.2f\n", BMI);
	printf("BMI VALUES\n");
	if (BMI < 18.5)
		printf("Underweight:\t less than 18.5\n");
	if (BMI >18.5 && BMI<=24.9)
		printf("Normal:\t between 18.5 and 24.9\n");
	if (BMI >24.9 && BMI<=29.9)
		printf("Overweight:\t between 25 and 29.9\n");
	if (BMI >=30)
		printf("Obese:\t 30 or greater\n");
	return 0;
}