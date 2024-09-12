#include<stdio.h>
int main()
{
	int n,i, j, factorial;
	float sum=0;
	printf("Enter the no");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		factorial=1;
		for(j=1; j<=i; j++)
		{
			factorial = factorial *j;
		}
	    sum = sum +(i/factorial);
	}
	printf("Sum of series: %f\n", sum);
	return 0;
}
