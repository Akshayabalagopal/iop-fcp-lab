#include<stdio.h>
int main()
{
	int n, i, num, max=0, secondmax=0;
	printf("Enter the nos");
	scanf("%d", &n);
	printf("Enter a no");
	scanf("%d", &num);
	max = num;
	for(i = 1; i < n; i++)
	{
		printf("Enter the no");
		scanf("%d", &num);
		if(num>max)
		{
			secondmax= max;
			max = num;
		}
		else if(num>secondmax)
		{
			secondmax= num;
		}
	}
	printf("max:%d, secondmax:%d", max, secondmax);
	return 0;
}
