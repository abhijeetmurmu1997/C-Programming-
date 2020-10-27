#include<stdio.h>
int main()
{
	int l,u;
	scanf("%d",&l);
	scanf("%d",&u);
	int i;
	for(i=l;i<=u;i++)
	{
		int temp = i,rem = 0,sum = 0;
		while(temp!=0)
		{
			rem = temp%10;
			sum = sum+rem;
			temp = temp/10;
		}
		if(i%sum == 0)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}
