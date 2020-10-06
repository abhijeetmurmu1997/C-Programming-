#include<stdio.h>
int main()
{
	char character;
	printf("-------------:ALPHABET TESTING:--------------\n");
	printf("Enter the ALPHABET BOI:\n");
	character = getch();
	switch(character)
	{
		case'a':
			printf("The alphabet is VOWEL.");
			break;
		case'e':
		 	printf("The alphabet is VOWEL.");
		 	break;
		case'i': 	
		 	printf("The alphabet is VOWEL.");
			break;
		case'o':	
			printf("The alphabet is VOWEL.");
			break;
		case'u':	
			printf("The alphabet is VOWEL.");
			break;
		case'A':	
			printf("The alphabet is VOWEL.");
			break;
		case'E':	
			printf("The alphabet is VOWEL.");
			break;
		case'I':	
			printf("The alphabet is VOWEL.");
			break;
		case'O':	
			printf("The alphabet is VOWEL.");
			break;
		case'U':	
			printf("The alphabet is VOWEL.");
			break;					
		default:
		    printf("The alphabet is CONSONANT.");			
	}
	return 0;
}
