#include<stdio.h>

typedef struct employeeData 
{
    int employee_number;
    char employeeName[100];
    float basicPay;
} e1;

int main()
{   e1 *ptr;
    e1 employees[50];
    printf("Enter the value of N: ");
    int N, i; 
    scanf("%d", &N);
    getchar();
    if(N >=1 && N <=50 )
    {  
        for(i =0; i< N; i++)
        {
            printf("Enter employee number of employee %d: ",i+1);
            scanf("%d",&employees[i].employee_number);
            getchar();
            printf("Enter employee name: ");
            gets(employees[i].employeeName);
            printf("Enter basic pay: ");
            scanf("%f",&employees[i].basicPay);
        }
        
    for(i =0; i < N; i++)
    {
    	printf("\nEmployee Number: %d\n",employees[i].employee_number);
        printf("Employee Name: %s",employees[i].employeeName);
        printf("\nBasic Pay: %f\n",employees[i].basicPay);
    }
    return 0;
    }
    
}
