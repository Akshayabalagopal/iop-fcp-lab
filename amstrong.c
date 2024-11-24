#include<stdio.h>
int amstrong(int num);

int main()
{
	int num;
	printf("Enter num");
	scanf("%d", &num);
	if(amstrong(num))
	{
		printf("amstrong\n");
	}
	else
	{
		printf("not amstrong\n");
	}
	return 0;
}
int amstrong(int num)
{
	int sum=0, digit, temp=num;
	while(num>0)
	{
		digit= num%10;
		sum= sum + (digit*digit*digit);
		num= num/10;
	}
	if(temp==sum)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
