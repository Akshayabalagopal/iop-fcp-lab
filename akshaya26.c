#include<stdio.h>
int main()
{
	int i=1, n, sum_odd=0, sum_even=0;
	printf("Enter n");
	scanf("%d", &n);
	while(i<=n)
	{
		if(i%2!=0)
		{
			sum_odd+=i;
		}
		else
		{
			sum_even+=i;
		}
		i+=1;
	}
	printf("Sum of even no. = %d", sum_odd);
	printf("Sum of odd no. = %d", sum_even);
	return 0;
}
