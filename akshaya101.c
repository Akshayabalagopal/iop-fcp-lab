#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("LNMIITSTUDENT.DAT","a");
    if (fptr == NULL) 
	{
        printf("Error opening the file.\n");
        return 1; 
    }
    fprintf(fptr,"%s","This file is on append Mode");
	printf("Text has been written to the file in append mode.\n");
    fclose(fptr);
    return 0;
}
