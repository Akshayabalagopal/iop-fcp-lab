#include<stdio.h>
int main()
{
	int i=2, n,s;
	printf("Enter no");
	scanf("%d", &n);
	while(i<n)
	{
		if(n%i==0)
		{
		   s=0;
		   break;
	    }
		else 
		{
		   s=1;
	    }
		i+=1;
	}
	if(s==0)
	{ 
		printf("It is not prime no");
	}
	else
	{
		printf("It is prime no");
	}
	return 0;
}
