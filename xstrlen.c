//
// String Length
//
#include <stdio.h>

int strlen(char *c)
{
    int len = 0;
    while(*c++ != '\0')
        len++;

    return len;
}

int main()
{
    char str[100];
    printf("\nEnter string: ");
    scanf(" %s", str);

    printf("\nLength: %d\n", strlen(str));

    return 0;
}
