#include<stdio.h>
int main()
{
	int base,exp;
	scanf("%d",&base);
	scanf("%d",&exp);
	int i,num = 1;
	for(i=1;i<=exp;i++)
	{
		num = num*base;
	}
	printf("The power of %d with exponent %d is : %d",base,exp,num);
	return 0;
}
