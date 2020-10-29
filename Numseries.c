#include<stdio.h>
int main()
{
	int a=0,b=0;
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			a = a+6;
		}
		else
		{
			b = b+7;
		}
	}
	if(n%2==0)
	{
		printf("%d term of the series is %d",n,a-6);
	}
	else
	{
		printf("%d term of the series is %d",n,b-7);
	}
	return 0;
}
