#include<stdio.h>
int main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	int a[n];
	printf("The elements are\n");
	int *p;
	for(p=a;p<a+n;p++)
	{
		scanf("%d",p);
	}
	printf("The elements are\n");
	for(p=a;p<a+n;p++)
	{
		printf("%d\n",*p);
	}
	printf("the reverse array is\n");
	for(p=a+n-1;p>=a;p--)
	{
		printf("%d\n",*p);
	}
	return 0;
}
