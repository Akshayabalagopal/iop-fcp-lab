#include<stdio.h>
#include<math.h>
int main()
{
    int *ptr,n; 
    ptr =&n; 
    printf("Enter the number: ");
    scanf("%d",&n);
    int square = pow(*ptr,2);
    int cube = pow(*ptr,3);
    printf("%d %d",square,cube);
    return 0;
}
