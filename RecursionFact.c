#include<stdio.h>
int factNum();
int main()
{
	int n,r;
	printf("enter the number:");
	scanf("%d",&n);
	r = factNum(n);
	printf("%d",r);
}
int factNum(n)
{
	int i;
	if(n == 1)
	{
		return 1;
	}
	else
	return n * factNum(n-1);	
}
