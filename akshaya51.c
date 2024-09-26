#include<stdio.h>
int main()
{
	int rows=5, i, j;
	for(i=0; i<rows; i++)
	{
		for(j=0; j<rows; j++)
		{
			if(j==i)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
	return 0;
}
