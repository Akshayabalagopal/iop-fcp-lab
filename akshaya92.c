#include<stdio.h>
int main()
{   
    int N = 5, i;
    int arr[] = {1, 5 , 18, 3, 10};
    int max = *arr;
    for(i =0;i < N; i++)
    {
        if(max < *(arr+i))
        max = *(arr+i);
    }

    printf("%d is the maximum ",max);
    return 0;
}
