#include<stdio.h>
#include<string.h>


struct books
    {
        char bookname[20];
        char author[20];
        int publicationyear;
        float price;
    };
struct books b;

void entry(struct books *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nenter the details of book %d\n",i+1);
        printf("\nbook name");
        scanf("%s",&p->bookname);
        printf("\nauthor's name");
        scanf("%s",&p->author);
        printf("\nyear of publication");
        scanf("%d",&p->publicationyear);
        printf("\nbook price");
        scanf("%f",&p->price);
        
    }

}

void display(struct books *p,int n)
{
   
    int i;
    for(i=0;i<n;i++)
    {
        printf("\ndetails of book %d\n",i+1);
        printf("\nbook name");
        printf("       %s",p->bookname);
        printf("\nauthor's name");
        printf("       %s",p->author);
        printf("\nyear of publication");
        printf("       %d",p->publicationyear);
        printf("\nbook price");
        printf("       %f",p->price);
        
    }

}
int main()
{
    int n;
    printf("\nenter the number of entries\n");
    scanf("%d",&n);
    
    entry(&b,n);
    display(&b,n);
    


    

   
}
