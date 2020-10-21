#include<stdio.h>
int main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	int a[n];
	int *p;
	for(p=&a[0];p<&a[n];p++)
	{
		scanf("%d",p);
	}
	printf("The elements are\n");
	for(p=&a[0];p<&a[n];p++)
	{
		printf("%d\n",*p);
	}
	int sum = 0;
	for(p=&a[0];p<&a[n];p++)
	{
		sum+=*p;
	}
	printf("Sum : %d",sum);
}
