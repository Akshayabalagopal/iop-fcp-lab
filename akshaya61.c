#include<stdio.h>
int main()
{
	int i, n, temp, j;
	printf("\nEnter the no of elements\n");
	scanf("%d", &n);
	int a[n];
	printf("\nEnter the array\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}	
	printf("\nEntered array\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t", a[i]);
	}
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-1; j++)
		{
			if(a[j]>a[j+1])
			{
				temp= a[j];
				a[j]= a[j+1];
				a[j+1]= temp;
			}
		}
	}
	printf("\nBubble sorted\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t", a[i]);
	}
	return 0;
}
