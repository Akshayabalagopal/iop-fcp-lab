#include<stdio.h>
int main()
{
	int a[10], count=0, odd_count=0, i;
	for(i=0; i<10; i++)
	{
		printf("Enter the value\n");
		scanf("%d", &a[i]);
		count=count+1;
		if(a[i]%2==1)
		{
			odd_count=odd_count+1;
		}
	}
	printf("no of odd elements= %d", odd_count);
	printf("no of elements= %d", count);
	return 0;
}
