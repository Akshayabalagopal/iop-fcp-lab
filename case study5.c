#include<stdio.h>
int main()
{
	int n, a, b, num, i;
	num=1;
	int arr[n];
	printf("Enter the number");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("Enter a number");
		scanf("%d", &arr[i]);
	}
	for(i=0; i<n; i++)
	{
		while(num<arr[i])
		{
			a=b;
			b=num;
			num=a+b;
		}
		if(num==arr[i])
		{
			printf("IsFibo");
		}
		else
		{
			printf("IsNotfibo");
		}
		a=0, b=1, num;
		num=a+b;
		printf("\n");
	}
}
