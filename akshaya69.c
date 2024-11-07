#include<stdio.h>
int main()
{
	int a[10], i, search, temp;
	for(i=0; i<10; i++)
	{
		printf("Enter the element\n");
		scanf("%d", &a[i]);
	}
	printf("Array is dispalyed\n");
	for(i=0; i<10; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	printf("The element to be searched\n");
	scanf("%d", &search);
	for(i=0; i<10; i++)
	{
		if(a[i]==search)
		{
			temp=i;
			break;
		}
	}
	printf("Element is present %d", temp);
	return 0;
}
