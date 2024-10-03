#include<stdio.h>
int main()
{
	int t, num, Max, Secondmax;
	printf("Enter the value\n");
	scanf("%d", &t);
	printf("Enter the first no\n");
	scanf("%d", &Max);
	while(t>1)
	{
		printf("Enter another no");
		scanf("%d", &num);
		if(num>Max)
		{
			Secondmax=Max;
			Max=num;
		}
		if(num<Max&&num>Secondmax)
		{
			Secondmax=num;
		}
		t-=1;
	}	
	printf("The maximum and second maximumare %d,%d", Max, Secondmax);
	return 0;
}
