#include<stdio.h>
const int city = 2;
const week = 7;
int i,j;
int main()
{
	int temp1[city][week];
	printf("Enter Details:\n");
	for(i=0;i<city;i++)
	{
		for(j=0;j<week;j++)
		{
			printf("city %d week %d:", i+1,j+1);
			scanf("%d", &temp1[i][j]);
		}
	}
	printf("display:\n");
	for(i=0;i<city;i++)
	{
		for(j=0;j<week;j++)
		{
			printf("city %d week %d %d\n",i+1,j+1,temp1[i][j]);
		}
	}
	return 0;
}
