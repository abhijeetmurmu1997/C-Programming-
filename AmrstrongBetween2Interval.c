#include<stdio.h>
#include<math.h>
int l,u,n,t,t1,count=0,digit,rem,s=0;
int main()
{
	printf("enter the lower value:");
	scanf("%d",&l);
	printf("enter the upper value:");
	scanf("%d",&u);
	for(n=l;n<=u;n++)
	{
		t = n;
		t1 = n;
		while(t!=0)
		{
			digit = t%10;
			count = count + 1;
			t/=10;
		}
		while(t1!=0)
		{
			rem = t1%10;
			s = s + pow(rem,count);
			t1/=10;
		}
		if(s == n)
		{
			printf("%d\n", n);
		}
		count=0;
		s = 0;
	}
	return 0;
	}
