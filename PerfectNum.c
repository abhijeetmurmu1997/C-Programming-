#include<stdio.h>
int i,sum=0,n;
int main()
{
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
		   sum = sum + i;
	    }
	}
	if(sum == n)
	{
		printf("perfect no.");
	}
	else
	printf("not perfect");
	return 0;
}
