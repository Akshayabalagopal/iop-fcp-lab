#include<stdio.h>
void main()
{
	int T, q, tem, count=0, i;
	int n[T];
	printf("Enter the value of T");
	scanf("%d", &T);
	for(i=0; i<T; i++)
	{
		count=0;
		printf("Enter the value of n[i]");
		scanf("%d", &n[i]);
    }
	for(i=0; i<T; i++)
	{
		tem= n[i];
		while(n[i]!=0)
		{
			q= n[i]%10;
			if(tem%q==0)
			{
				count++;
			}
			n[i]=n[i]/10;
	    }
	    printf("Count %d=%d\n",i, count);
	}
}
