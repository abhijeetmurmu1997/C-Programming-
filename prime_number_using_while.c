#include<stdio.h>
int main()
{
	int flag = 0,n,i=2;
	printf("enter the number:");
	scanf("%d", &n);
	while(i<=n/2)
	{
		if(n%i==0)
		{
			flag = 1;
			break;
		}
		i++;
	}
	if(flag == 1)
	{
		printf("the entered number is not prime.");
	}
	else
	printf("the entered number is prime.");
	return 0;
}
