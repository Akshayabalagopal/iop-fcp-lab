#include<stdio.h>
int main()
{
	int a[3][3],b[3][3], i, j, c[3][3];
	printf("Enter the elements of the first array");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nThe first array\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("The elements of the second array\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	printf("\nThe second array\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++ )
		{
			c[i][j]= a[i][j]+b[i][j];
		}
	}
	printf("The sum of array\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
