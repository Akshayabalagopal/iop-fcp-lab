#include<stdio.h>
int main()
{
	int i, j, k, n;
	n=5;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=n; j++)
		{
			printf(" ");
		}
		n= n-1;
		for(k=0; k<=i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
