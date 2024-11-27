#include<stdio.h>
#include<stdlib.h>
int main()
{
    int luckynum,randomnum, a;
    printf("welcome to the guessing game\nenter your lucky number\n");
    scanf("%d",&luckynum);
    for(a=1;a<2;a++)
    {
        randomnum=rand();
        if(luckynum==randomnum)
        {
            printf("congratulations!\nyou won");
        }
        else
        {
            printf("try next time\nthe number to win was %d",randomnum);
        }
    }
    return 0;

}
