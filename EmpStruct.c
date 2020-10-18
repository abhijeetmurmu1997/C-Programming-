#include<stdio.h>
struct Emp
{
	int eno;
	char ename[30];
	float esal;
};
int main()
{
	int n = 2;
	struct Emp e[n];
	int i;
	printf("enter the details:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d \n%s \n%f",&e[i].eno, e[i].ename, &e[i].esal);
	}
	printf("The details are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d \t%s \t%f\n",e[i].eno, e[i].ename, e[i].esal);
	}
	return 0;
}
