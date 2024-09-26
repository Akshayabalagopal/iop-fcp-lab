#include<stdio.h>
int main()
{
	int rows=5, i, j, k;
	for(i=0; i<=rows; i++)
	{
		int n=1;
		for(j=0; j<=(rows-i); j++)
		{
			printf(" ");
		}
		for(k=0; k<i; k++)
		{
			printf("%d", n++);
		}
		printf("\n");
	}
	return 0;
}
