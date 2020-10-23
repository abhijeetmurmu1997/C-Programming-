#include<stdio.h>
int main()
{
	int l,u;
	scanf("%d",&l);
	scanf("%d",&u);
	int i,j;
	for(i=l;i<=u;i++)
	{
		int sum = 0;
		for(j=1;j<i;j++)
		{
			if(i%j == 0)
			{
				sum = sum+j;
			}
		}
		if(sum>i)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}
