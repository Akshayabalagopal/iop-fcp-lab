int main()
{
	int num,i, a[10], b[10];
	printf("Elements of a array\n");
	for(i=0; i<10; i++)
	{
		printf("Enter the no\n");
		scanf("%d", &a[i]);
	}
	printf("Elements of b array\n");
	for(i=0; i<10; i++)
	{
		printf("Enter the no\n");
		scanf("%d", &b[i]);
	}
	for(i=0; i<10; i++)
	{
		num= a[i];
		a[i]= b[i];
		b[i]= num;
	}
	printf("Elements of a array after swap");
	for(i=0; i<10; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
	printf("Elements of b array after swap");
	for(i=0; i<10; i++)
	{
		printf("%d\t", b[i]);
	}
	return 0;
}
