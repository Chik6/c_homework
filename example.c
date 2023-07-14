#include <stdio.h>
#include <ctype.h>

int main()
{
	char letter;
	printf("Enter the letter\n");
	scanf(" %c", &letter);

	letter = tolower(letter);

	if (letter >= 'a' && letter <= 'z'){
		if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u'){
			printf("The letter is vowl\n");
		
		} else {
			printf("The letter is consonant\n");
		}
	}else{
		printf("Invalid input\n");
	}
}
