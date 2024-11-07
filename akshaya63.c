#include<stdio.h>
int main()
{
	int a[3][3], max, min, i, j;
	printf("Enter the elements in the array\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	max= a[0][0];
	min= a[0][0];
	printf("\narray\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d\t", a[i][j]);
			if(a[i][j]>max)
			{
				max = a[i][j];
			}
			if(a[i][j]<min)
			{
				min= a[i][j];
			}
		}
	}
	printf("\n");
	printf("Max and Min values %d and %d\n", max, min);
	return 0;
}
