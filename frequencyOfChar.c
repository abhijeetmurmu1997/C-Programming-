#include<stdio.h>
int main()
{
	char str[100];
	char c;
	int count = 0;
	printf("enter the text:");
	fgets(str,sizeof(str),stdin);
	printf("Enter the character to find the occurance:");
	scanf("%c",&c);
	int i;
	for(i=0;str[i]!=0;i++)
	{
		if(c == str[i])
		{
			count+=1;
		}
	}
	printf("Frequency : %d",count);
	return 0;
}
