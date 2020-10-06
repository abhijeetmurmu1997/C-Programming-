#include<stdio.h>
int main()
{
	char character;
	char upper_case, lower_case;
	printf("-----------Alphabet testing:------------\n");
	printf("enter the alphabet:\n");
	character = getch();
	upper_case = (character == 'A'|| character == 'E'|| character == 'I'|| character == 'O'|| character == 'U');
	lower_case = (character == 'a'|| character == 'e'|| character == 'i'|| character == 'o'|| character == 'u');
	if(upper_case || lower_case)
	{
		printf("HURRAYYY!!!!! The entered alphabet is a VOWEL.");
	}
	else
	printf("DAMNNNN!!!!! The entered alphabet is CONSONANT.");
return 0;
}
