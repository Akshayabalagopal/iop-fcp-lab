#include<stdio.h>
int main()
{
	int a[5], i, j=4,temp ; 
	for(i=0; i<5; i++)
	{
		printf("\nEnter the elements\n");
		scanf("%d", &a[i]);
	}
	i=0;
	while(i<j)
	{
		temp= a[i];
		a[i]= a[j];
		a[j]= temp;
		i+=1;
		j-=1;
	}
	printf("Reversed array\n");
	for(i=0; i<5; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}
