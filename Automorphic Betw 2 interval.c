#include<stdio.h>
int main()
{
	int l,u;
	scanf("%d",&l);
	scanf("%d",&u);
	int i;
	for(i=l;i<=u;i++)
	{
		int temp = i,count = 0,sum = 0;
		int dou = i*i;
		while(temp!=0)
		{
			count++;
			temp = temp/10;
		}
		int num = 1,j;
		for(j=1;j<=count;j++)
		{
			num = num*10;
		}
		sum = dou%num;
		if(i == sum)
		{
			printf("%d\n",i);
		}
    }
    return 0;
}
