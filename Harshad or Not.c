#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int temp = n,rem = 0,sum = 0;
	while(temp!=0)
	{
		rem = temp%10;
		sum = sum+rem;
		temp = temp/10;
	}
	if(n%sum == 0)
	{
		printf("Harshad.");
	}
	else
	printf("Not Harshad.");
	return 0;
}
