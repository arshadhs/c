//
//      Chapter 1 Page 20
//
// Word Count
//
#include<stdio.h>

#define IN 0
#define OUT 1

int main()
{
	int c;
	int newLine = 0;
	int word = 0;
	int character = 0;
	int state = OUT;

	while ((c = getchar()) != EOF)
	{
		character++;

		if (c == '\n')
		{
			newLine++;
		}
		if (c == ' ' || c == '\n' || c == '\t')
		{
			state = OUT;	
		}
		else if (state == OUT)
		{
		    state = IN;
			word++;
		}
	}
	
	printf ("line = %d, word = %d, character = %d", newLine, word, character);

	return 0;
}

