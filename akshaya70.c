#include<stdio.h>
int main()
{
	int a[10], i, element, occur;
	for(i=0; i<10; i++)
	{
		printf("Enter the element\n");
		scanf("%d", &a[i]);
	}
	printf("Enter the element which occurs\n");
	scanf("%d", &element);
	occur=0;
	for(i=0; i<10; i++)
	{
		if(a[i]==element)
		{
			occur+=1;
		}
	}
	printf("no of occurances %d", occur);
	return 0;
}
