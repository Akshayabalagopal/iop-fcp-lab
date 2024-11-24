#include<stdio.h>
int even_odd(int a);
int main()
{
	int a, num;
	printf("Enter the no to be checked");
	scanf("%d", &a);
	num=even_odd(a);
	if(num==1)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
}
int even_odd(int a)
{
	if(a%2==0)
	{
		return 1;
	}
	else
	return 0;
}
