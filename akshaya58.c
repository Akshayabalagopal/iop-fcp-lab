#include<stdio.h>
int main()
{
	int a[10], i, b[10], sum[10];
	printf("Elements of a array\n");
	for(i=0; i<10; i++)
	{
		printf("Enter the no\n");
		scanf("%d", &a[i]);
	}
	printf("Elements of b array\n");
	for(i=0; i<10; i++)
	{
		printf("Enter the no\n");
		scanf("%d", &b[i]);
	}
	printf("Elements of sum array\n");
	for(i=0; i<10; i++)
	{
		sum[i]=a[i]+b[i];
		printf("%d", sum[i]);
	}
	return 0;
}
