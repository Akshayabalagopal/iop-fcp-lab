#include<stdio.h>
int main()
{
	int num, sum=0;
	printf("Enter the no");
	while(1)
	{
		scanf("%d", &num);
		if(num<0)
		{
			break;
		}
		sum= sum+num;
	}
	printf("Sum= %d\n", sum);
	return 0;
}
