#include<stdio.h>
int main()
{
	int n, i, a=0, b=1, sum;
	printf("Enter n");
	scanf("%d", &n);
	printf("Enter fibanocci series: %d,%d,", a,b);
	for(i=3; i<=n; i++)
	{
		sum= a+b;
		printf("%d,", sum);
		a=b;
		b=sum;
	}
	return 0;
}
