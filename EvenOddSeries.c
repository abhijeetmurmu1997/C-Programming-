#include<stdio.h>
int main()
{
	int a=1,b=1;
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2 == 0)
		{
			a = a*3;
		}
		else
		{
			b = b*2;
		}
	}
	if(n%2 == 0)
	{
		printf("%d series of the number is :%d",n,a/3);
	}
	else
	{
		printf("%d series of the number is %d",n,b/2);
	}
}
