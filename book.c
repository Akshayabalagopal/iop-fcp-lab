#include<stdio.h>
struct book
{
	char bookname[100];
	char author[100];
	int publicationyear;
	float price;
}; 

struct book readbook()
{
	struct book b;
	printf("Enter book name");
	scanf("%s", &b.bookname);
	printf("Enter author");
	scanf("%s", &b.author);
	printf("Enter year");
	scanf("%d", &b.publicationyear);
	printf("Enter price");
	scanf("%f", &b.price);
	return b;
}
 
void displaybook(struct book b)
{
	printf("\nbook info");
	printf("bookname: %s\n", b.bookname);
	printf("author:%s\n", b.author);
	printf("publicationyear: %d\n", b.publicationyear);
	printf("price: %f\n", b.price);
}
int main()
{
	struct book m;
	m = readbook();
	displaybook(m);
	return 0;
}

