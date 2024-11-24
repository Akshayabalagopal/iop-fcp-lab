#include<stdio.h>
int prime(int a);
int main()
{
	int n, ans;
	printf("Entre the no");
	scanf("%d", &n);
	ans=prime(n);
	printf("%d", ans);
}
int prime(int a)
{
	int i, count=0;
	for(i=2; i<a; i++)
	{
		if(a%2==0)
		{
			count++;
		}
	}
	if(count==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
