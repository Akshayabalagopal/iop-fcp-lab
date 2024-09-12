#include<stdio.h>
int main()
{
	int n, i, num, max, min;
	printf("Enter the nos");
	scanf("%d", &n);
	printf("Enter the no");
	scanf("%d", &num);
	max = min = num;
	for(i=1; i<n; i++)
	{
		printf("Enter the no");
		scanf("%d", &num);
		if(num>max)
		{
			max= num;
		}
		if(num<min)
		{
			min = num;
		}
	}
	printf("min: %d, max: %d", min,max);
	return 0;
}
