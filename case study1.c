#include<stdio.h>
#include<string.h>
#include<math.h>
int validation(int n);
int main()
{
    int t, i, j ; 
    printf("Enter the value of t: ");
    scanf("%d",&t);
    if(validation(t)==1)
{
    char words[t][100]; 
    int change[t]; 
    getchar(); 
    for(i =0; i < t; i++)
    {
        printf("Enter the word: ");
        fgets(words[i],100,stdin);
        int len = strlen(words[i]);
        if(len >100)
        {
            printf("Invalid Input\n");
        }

    }

    for(i =0; i <t; i++)
    {
        change[i] = 0;
        int wordlength = strlen(words[i]);
        for(j = wordlength-1; j>0; j--)
        {   
            if(words[i][j] > words[i][j-1])
            {
                char temp = words[i][j];
                words[i][j] = words[i][j-1];
                words[i][j-1] = temp;
                change[i] =1;
                break;
            }

        }
    }
    printf("\n");
    for(i =0; i <t; i++)
    {
        if(change[i] == 0)
        {
            printf("No answer\n\n");
        }
        if(change[i] == 1)
        {
        puts(words[i]);
        }

    }
}
else
{
    printf("Invalid Input\n");
}
return 0;
}

int validation (int n)
{   
    if(n>=1 && n <= 100000)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}