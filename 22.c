#include<stdio.h>
int main()
{ 	int n,fact;
	printf("Type N : ");
	scanf("%d",n);
	int i=1;
	fact=1;
	while (i<=n)
	{
		fact=fact*i;
		i+=1;
	}
	printf("Factorial:%d",fact);
}
	
