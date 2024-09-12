#include<stdio.h>
int main()
{
	int a, b, sum, digit;
	printf("Enter the value");
	scanf("%d", &a);
	int dup=a;
	int i = 0;
	while(a>0)
	{
		digit = a%10;
		sum = (sum*10) + digit;
		i+=1;
		a= a/10;
	}
	if(dup==sum)
	{
		printf("%d is a palindrome", sum);
	}
	else
	{
		printf("%d is not a palindrome", sum);
	}
	return 0;
}
