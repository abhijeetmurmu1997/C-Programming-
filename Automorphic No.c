#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int dob = n*n;
	int node = n,count = 0;
	while(node!=0)
	{
		count++;
		node/=10;
	}
	printf("Count : %d\n",count);
	int num = 1;
	int i;
	for(i=1;i<=count;i++)
	{
		num = num*10;
	}
	int sum = dob%num;
	if(n == sum)
	{
		printf("Automorphic.");
	}
	else
	printf("Not An Automorphic.");
	return 0;
}
