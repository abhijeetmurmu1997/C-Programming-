#include<stdio.h>
int limit,n,j,rem,fact,sum,temp;
int main()
{
	printf("enter the limit:");
	scanf("%d",&limit);
	for(n = 1;n <= limit;n++)
	{
		sum = 0;
		temp = n;
		while(temp!=0)
		{
			rem = temp%10;
			fact = 1;
			for(j=1;j<=rem;j++)
			{
				fact = fact*j;
			}
			sum+=fact;
			temp/=10;
		}
		if(sum==n)
		printf("%d\n",n);
	}
	return 0;
}
