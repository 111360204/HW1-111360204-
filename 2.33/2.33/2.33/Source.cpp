#include<stdio.h>

int main(void)
{
	float a, b, c, d,e;
	printf("請輸入一整天的總里程數(km):");
	scanf_s("%f", &a);
	printf("汽油一公升多少錢:");
	scanf_s("%f", &b);
	printf("平均一公升能行駛多少公里:");
	scanf_s("%f", &c);
	printf("一天的停車費為多少:");
	scanf_s("%f", &d);
	e = a/c;
	e = e*b;
	e = e + d;
	printf("今天一整天的通行費為:%.0f",e);
	return 0;
}