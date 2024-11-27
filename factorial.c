#include<stdio.h> 
int factorial(int num);
int nCr (int n,int r);
int main()
{  
    int n,r;
    printf("Enter the value of n and r, respectively: ");
    scanf("%d %d",&n, &r);
    printf("%dC%d = %d",n,r,nCr(n,r));
    
}
int factorial(int n)
{   if(n ==0)
    return 1;

    int result = n * factorial(n-1);
    return result;
}
int nCr(int n, int r)
{
    int ans =((factorial(n))/(factorial(r)*factorial(n-r)));
    return ans;

}
