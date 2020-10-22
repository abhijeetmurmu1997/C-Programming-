#include<stdio.h>
int main()
{
	int n = 1,row;
	int i,j;
	printf("enter the no. of rows:");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",n);
			n++;
		}
		printf("\n");
	}
	return 0;
}
