#include<stdio.h>
int main()
{
	int i, n, Max, Secondmax, a[n];
	printf("Enter the value\n");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		printf("Enter no\n");
		scanf("%d", &a[i]);
	}	
	Max=a[1];
	Secondmax=a[1];
	for(i=1; i<=n; i++)
	{
		if(a[i]>Max)
		{
			Secondmax=Max;
			Max=a[i];
		}
		else if(a[i]>Secondmax)
		{
			Secondmax=a[i];
		}
	}
	printf("Max=%d\n", Max);
	printf("Secondmax=%d", Secondmax);
	return 0;
}
