#include <iostream>
#include <stdio.h>
int main()
{
	double count;
	int c;
//	for(count = 0; (c = getchar()) != EOF; count++)
	{
		// putchar(c);
//		std::cout << static_cast<char>(c);
	}

	while((c=getchar()) != EOF)
	{
		if (c == '\n')
			count++;
	}
		printf("%.0f", count);
	return 0;
}
