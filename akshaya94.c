#include<stdio.h>
#include<string.h>
int main()
{
    printf("Enter the string: ");
    char string1[100];
    char string2[100];
    gets(string1);
    int length= strlen(string1);
    int i;
    for(i=0; i < length; i++ )
    {
        *(string2+i) = *(string1 + length -1 -i);
    }
    puts(string2);
    return 0;
}
