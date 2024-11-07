#include<stdio.h>
int main()
{
	int a[3][3],i, j, transpose[3][3];
	printf("Enter the elements of the array\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("\narray\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			transpose[i][j]= a[j][i];
		}
	}
	printf("\nTranspose of array\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d\t", transpose[i][j]);
		}
		printf("\n");
	}
	return 0;
}
