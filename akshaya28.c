#include<stdio.h>
int main()
{
	int num, sum=0, digit, temp;
	printf("Enter num");
	scanf("%d", &num);
	temp = num;
	while(temp>0)
	{
		 digit = temp%10;
	    sum = sum + (digit*digit*digit);
     	temp = temp/10;
	}
	if(num==sum)
	{
		printf("%d is an amstrong no", num);
	}
	else
	{
		printf("%d is not an amstrong no", num);
	}
	return 0;
}
