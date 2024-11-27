#include<stdio.h>
void read_arr_max()
{
    int n, i;
    printf("enter the number of terms you want in array\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("enter the element\n");
        scanf("%d",&arr[i]);
    }
    printf("array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    int max;
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("\nmaximum element of the array is %d",max);
}
int main()
{
    read_arr_max();
    return 0;

}
