#include<stdio.h>
int n,i;
int main()
{
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i = 1;i<=n; i++)
	{
		if(n%i==0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
