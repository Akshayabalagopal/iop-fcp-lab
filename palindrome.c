#include<stdio.h>
int palindrome(int a);
void main()
{
	int a;
	printf("Enter a");
	scanf("%d", &a);
	if (palindrome(a))
	{
		printf("palindrome\n");
	}
	else
	{
		printf("not palindrome\n");
	}
}
int palindrome(int a)
{
	int digit, sum=0, dup=a;
	while(a>0)
	{
		digit= a%10;
		sum= (sum*10)+ digit;
		a =a/10; 
	}
	
	if(dup==sum)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
