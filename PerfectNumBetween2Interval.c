#include<stdio.h>
int u,l,i,j,sum;
int main()
{
	printf("enter the lower limit:");
	scanf("%d",&l);
	printf("enter the upper limit:");
	scanf("%d",&u);
	for(i=l;i<=u;i++)
	{
		sum = 0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum+=j;
			}
		}
		if(i==sum)
		printf("%d\n",i);
	}
	return 0;
}
