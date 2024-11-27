#include<stdio.h> 
int lengthOfString(char arr[]); 
int main()
{
    char inputLine[100] ; 
    printf("Enter your statement: "); 
    fgets(inputLine,100,stdin);
    int length = lengthOfString(inputLine); 
    printf("%d is the length of string",length); 
}

int lengthOfString(char arr[])
{
    int i =0;
    while(arr[i] != '\0')
    {
        i++;
    }
    return i-1;
}
