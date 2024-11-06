#include<stdio.h>
int main()
{
	int i, j, n, min, index, temp;
	printf("Enter the no of elements");
	scanf("%d", &n);
	int a[n];
	printf("\nEnter the elemnts\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\nEntered array\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t", a[i]);
	}
	for(i=0; i<n; i++)
	{
		min= a[i];
		for(j=i; j<n; j++)
		{
			if(a[j]<min)
			{
				min= a[j];
				index=j;
			}
		}
		if(min!=a[i])
		{
			temp= a[i];
			a[i]= min;
			a[index]= temp;
		}
	}
	printf("\nselection sorted\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t", a[i]);
	}
	return 0;
}
