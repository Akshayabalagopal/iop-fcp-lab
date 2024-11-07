#include<stdio.h>
int main()
{
	int a[3][3], i, j, sum=0;
	printf("Enter the elements of the array");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &a[i][j]);
			sum= a[i][j]+sum;
		}
	}
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d\t", a[i][j]);
		}
	}
	printf("Sum of elements %d", sum);
	return 0;
}
