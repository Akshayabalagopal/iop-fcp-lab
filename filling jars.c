#include<stdio.h>
#include<math.h>
void main()
{
	int n, m, i, j, a, b, input, sum=0, avg;
	printf("Enter the no of jars and operations");
	scanf("%d%d", &n, &m);
	int jar[n];
	for(i=0; i<n; i++)
	{
		jar[i]= 0;
	}
	for(i=0; i<m; i++)
	{
		printf("Enter a, b, input");
		scanf("%d%d%d" , &a, &b, &input);
		for(j=a-1; j<b; j++)
		{
			jar[j]= jar[j]+ input;
			
		}
	}
	for(i=0; i<n; i++)
	{
		sum= sum+jar[i];
	}
	avg=sum/n;
	printf("Total=%d, Average=%d", sum, avg);
}
