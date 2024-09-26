#include<stdio.h>
int main()
{
	int i, j, k, rows=4;
	for(i=1; i<=rows; i++)
	{
		int n=1;
		for(j=0; j<=rows-i; j++)
		{
			printf(" ");
	    }
	    for(k=1; k<i; k++)
	    {
	    	printf("%d", n);
		    n = n+1;
		}
	    for(k=1; k<=i; k++)
	    {
	    	printf("%d", n);
		    n=n-1;
		}
		printf("\n");
	}
	return 0;
}
