#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i, vowel = 0;
	printf("Enter the string:");
	fgets(str,sizeof(str),stdin);
	
	for(i=0;str[i];i++)
	{
		if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' ||str[i] == 'u' ||str[i] == 'U')
		{
			vowel++;
		}
	}
	printf("Total no. of VOWELS : %d", vowel);
	return 0;
}
