#include<stdio.h>

int main()
{
	int a,b,c;
	printf("number\tsquare\tcube\n");
	for (a = 0; a <= 10; a += 1)
	{
		printf("%d\t", a);
		b = a * a;
		printf("%d\t", b);
		c = b *a;
		printf("%d\n",c);
	}
	return 0;
}