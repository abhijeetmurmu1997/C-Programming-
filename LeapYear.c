#include<stdio.h>
int main()
{
	int year;
	printf("enter the year:");
	scanf("%d", &year);
	if((year%400 == 0) || (year%4 == 0 && year%100 != 0))
	{
		printf("The year %d is LEAP YEAR.", year);
	}
	else
	printf("The year %d is NOT LEAP YEAR.", year);
	return 0;
}
