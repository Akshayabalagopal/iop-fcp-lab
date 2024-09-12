#include<stdio.h>
int main()
{
	int a,fact=1,i;
	printf("Enter number : ");
	scanf("%d",&a);
	i=1;
	while (i<=a)
	{
		fact=fact*i;
		i+=1;
	}
	printf("Factorial of %d = %d",a,fact);
	return 0;
}
