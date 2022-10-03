#include<stdio.h>

int main()
{
	int a, b, c, max,min;
	printf("請輸入三個數字，中間用空白鍵間隔:");
	scanf_s("%d%d%d", &a, &b, &c);
	max = a;
	min = b;
	if (b > max)
		max = b;
		if (c > max)
			max = c;
	if (a < min)
		min = a;
		if (c < min)
			min = c;
	printf("最大值為%d\n", max);
	printf("最小值為%d", min);
	return 0;
}