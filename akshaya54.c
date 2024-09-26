#include<stdio.h>
int main()
{
	int a[10], sum=0, i;
	for(i=0; i<10; i++)
	{
		printf("Enter the value\n");
		scanf("%d", &a[i]);
		sum=sum+a[i];
	}
	printf("sum=%d", sum);
	return 0;
}
