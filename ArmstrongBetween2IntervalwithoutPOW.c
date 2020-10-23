#include<stdio.h>
int main()
{
	int l,u;
	printf("enter the lower number:");
	scanf("%d",&l);
	printf("enter the upper number:");
	scanf("%d",&u);
	int i;
	for(i=l;i<=u;i++)
	{
		int temp = i,count = 0;
		int t = i;
		while(temp!=0)
		{
			count++;
			temp/=10;
		}
		int sum = 0, rem = 0;
		while(t!=0)
		{
			int mul = 1;
			int j;
			rem = t%10;
			for(j=1;j<=count;j++)
			{
				mul = mul*rem;
			}
			sum = sum+mul;
			t = t/10;
		}
		if(sum == i)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
