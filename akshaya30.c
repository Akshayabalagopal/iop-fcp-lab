#include<stdio.h>
int main()
{
	int a, sum=0, digit;
	printf("Enter the no");
	scanf("%d", &a);
	int dup=a;
	int i = 0;
	while(a>0)
	{
		digit= a%10;
		sum = (sum*10)+digit;
		i+=1;
		a = a/10;
	}
	printf("The reverse is %d", sum);
}
