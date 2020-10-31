#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int i,hcf=0,lcm=0;
	for(i=1;i<=a || i<=b;i++)
	{
		if((a%i == 0) && (b%i == 0))
		{
			hcf = i;
		}
		lcm = (a*b) / hcf;
	}
	printf("LCM of %d and %d is : %d",a,b,lcm);
	return 0;
}
