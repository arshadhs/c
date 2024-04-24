//
//      Chapter 1 Page 22
//
// Count digits, whitespaces, and all characters using arrays
//
#include<stdio.h>

int main()
{
	int c,i;
	int ws = 0;
	int charCount = 0;
	int digits[10] = {0};

	while ((c = getchar()) != EOF)
	{
		charCount++;

		if (c == ' ' || c == '\n' || c == '\t')
		{
			ws++;
		}

		if ( c >= '0' && c <= '9')
		{
			digits[c - '0']++;
		}
	}

	printf("\nWords = %d", ws);
	printf("\nCharacter = %d", charCount);

	for (i = 0; i <= 9; i++)
	{
		printf("\ndigits[%d] = %d", i, digits[i]);
	}

	return 0;
}
