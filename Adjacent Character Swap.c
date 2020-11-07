#include<stdio.h>
#include<conio.h>
int main()
{
	char str[100];
	int i,length = 0,temp = 0;
	gets(str);
	for(i=0;str[i]!=0;i++)
	{
		length++;
	}
	for(i=0;i<length-1;i+=2)
	{
		temp = str[i];
		str[i] = str[i+1];
		str[i+1] = temp;
	}
	printf("%s",str);
	getch();
}
