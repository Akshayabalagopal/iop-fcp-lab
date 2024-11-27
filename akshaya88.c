#include<stdio.h>
int main()
{   
    int n, i;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr1[n]; 
    for(i =0; i <n; i++)
    {
        printf("Enter the element to be stored at index %d: ",i+1);
        scanf("%d",&arr1[i]);
    }

    int arr2[n]; 
    for(i =0; i <n; i++)
    {
        *(arr2+i) = *(arr1+i);
    }

    for(i =0; i <n; i++)
    {
        printf("%d\t",arr2[i]);
    } 
    return 0;
}
