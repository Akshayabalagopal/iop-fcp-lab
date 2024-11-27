#include<stdio.h>
void vowelCheck(char c); 
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') )
    {
        vowelCheck(c); 
    }
    else
    printf("Invalid Input"); 
}

void vowelCheck(char c)
{
    char vowels []= {'A','E','I','O','U','a', 'e', 'i', 'o','u'}; 
    {  int flag = 0, i; 
        for(i =0; i <10; i ++)
        {
       
        if(c == vowels[i])
        {
            printf("Entered character is a vowel");
            flag =1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("Entered character is a consonant");

    }
    }

}

