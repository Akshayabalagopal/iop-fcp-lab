#include<stdio.h>
int interchange(int x, int y);
int main()
{
	int x,y;
	printf("Enter the values of x and y");
	scanf("%d%d", &x,&y);
	interchange(x,y);
}
int interchange(int x, int y)
{
	int num;
	num=x;
	x=y;
	y=num;
	printf("%d%d", x, y);
}
