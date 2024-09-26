#include<stdio.h>
int main()
{
	int a[10], i, positive_count=0, negative_count=0, zero_count=0;
	for(i=0; i<10; i++)
	{
		printf("Enter the value\n");
		scanf("%d", &a[i]);
		if(a[i]<0)
		{
			negative_count=negative_count+1;
		}
		else if(a[i]==0)
		{
			zero_count=zero_count+1;
		}
		else
		{
			positive_count=positive_count+1;
		}
	}
	printf("No of negative elements=%d", negative_count);
	printf("No of zero elements=%d", zero_count);
	printf("No of positive elements=%d", positive_count);
	return 0;
}
