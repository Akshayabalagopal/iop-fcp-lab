#include<stdio.h>
int main()
{
int a,b,c,big;
printf("Enter 3 numbers:");
scanf("%d%d%d",&a,&b,&c);
big=((a>b&&a>c)?a:b>c?b:c);
printf("\nThe biggest number is:%d",big);
int num=sizeof(a);
printf("%d",num);
return 0;
}

