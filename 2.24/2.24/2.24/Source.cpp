#include<stdio.h>

int main()
{
	int a;
	printf("請輸入一個整數:");
	scanf_s("%d",&a);
	if (a % 2 == 0)
		printf("%d是偶數", a);
	else
		printf("%d是奇數", a);
	return 0;
}