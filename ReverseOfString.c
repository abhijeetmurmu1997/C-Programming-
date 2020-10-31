#include<stdio.h>
int main()
{
	char str[100];
	int lenght,i;
	gets(str);
	lenght = strlen(str);
	for(i=lenght-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
	return 0;
}
