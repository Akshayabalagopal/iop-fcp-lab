#include<stdio.h>
int main()
{
	int a[3][3], b[3][3], i, j, c[3][3], k;
	printf("The elements of the first array");
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
	printf("The elements of the second array");
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
		for(j=0; j<3; j++)
		{
			c[i][j]=0;
			for(k=0; k<3; k++)
			{
				c[i][j]+= a[i][j]*b[i][k];
			}
		}
    }
    printf("The product of array");
    for(i=0; i<3; i++)
    {
    	for(j=0; j<3; j++)
    	{
    		printf("%d", c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
