#include<stdio.h>
int main()
{
	int binary;
	int dec = 0, weight = 1;
	printf("enter the binary no:");
	scanf("%d",&binary);
	int rem = 0;
	while(binary!=0)
	{
		rem = binary%10;
		dec+=rem*weight;
		binary/=10;
		weight*=2;
	}
	printf("%d",dec);
}
