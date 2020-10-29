#include<stdio.h>
int main()
{
	char str[100];
	int length,i;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		length++;
	}
	printf("The length of the string is:%d\n", length);
	for(i=length-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
	int flag = 0;
	for(i=0;i<length;i++)
	{
		if(str[i]!=str[length-i-1])
		{
			flag = 1;
			break;
		}
	}
	if(flag == 0)
	{
		printf("\nThe entered string is PALINDROME.");
	}
	else
	printf("\nThe entered string is not PALINDROME.");
	return 0;
}
