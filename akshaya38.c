#include<stdio.h>
int main()
{
	int n, i;
	printf("Enter the no");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		printf("%d,", i*i);
	}
	printf("\n");
	return 0;
}
