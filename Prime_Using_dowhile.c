#include<stdio.h>
int main()
{
	int i = 2, n, flag = 0;
	printf("enter the number:");
	scanf("%d",&n);
	do
	{
		if(n%i==0)
		{
			flag = 1;
			break;
		}
		i++;
	}
	while(i<=n/2);
	if(flag == 1)
	{
		printf("the number is not prime number");
	}
	else
	printf("the entered number is prime number."); 
	return 0;
}
