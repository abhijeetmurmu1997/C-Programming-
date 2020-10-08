#include<stdio.h>

int marks[5],n,i,j;
int main()
{
	printf("enter the values:");
	for(i=0;i<5;++i)
	{
		scanf("%d",&marks[i]);
	}
	printf("display:");
	for(i=0;i<5;i++)
	{
		printf("\n%d\n", marks[i]);
	}
	return 0;
}
