#include<stdio.h> 
void passedStudents(int arr[]); 
int main()
{
    int students[10], i; 
    for(i =0; i <10; i++)
    {
        printf("Enter marks: ");
        scanf("%d",&students[i]);
    }
    passedStudents(students); 
}

void passedStudents(int arr[]) 
{
	int i;
    for(i =0; i <10; i++) 
    {
        if(arr[i] > 500)
        {
            printf("Student with roll no. %d has passed the examinations with %d marks\n ",i,arr[i]);
        }
    }
}
