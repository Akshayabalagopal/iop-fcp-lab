#include<stdio.h>
#include<string.h>
int main()
{
    int n,gem=0, i, j, x, y;
    printf("enter the number of rocks\n");
    scanf("%d",&n);
    char rock[n][100];
    printf("enter the rocks");
    for(i=0;i<n;i++)
    {
        scanf("%s",rock[i]);
    }
    printf("elements are\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t",rock[i]);
    }
    for(i=0;i<1;i++)
    {
        for(j=0;j<strlen(rock[i]);j++)
        {
            int count=0;
            int a;
            a=rock[i][j];
            for(x=1;x<n;x++)
            {
               
                for(y=0;y<strlen(rock[x]);y++)
                {
                    if(a==rock[x][y])
                    {
                        count+=1;
                        break;
                    }

                }
            }
            if(count==n-1)
            {
                gem+=1;
            }



        }
    }
    printf("number of gem elemnets are %d",gem);
    return 0;


}
