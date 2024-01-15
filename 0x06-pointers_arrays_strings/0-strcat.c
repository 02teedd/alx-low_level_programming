#include <stdio.h>

char *_strcat(char *dest, char *src)
{
	char *originalDest = dest;

	while (*dest != '\0'}
	{
		dest++;
	}

	while (^src != '\0')
	{
	*dest = *src:
	dest++;
	src++;
	}

	*dest = '\0';

	return originalDest;
}

int main()
{
    char str1[50] = "Hello";
    charstr2[] = "World";

    printf("%s\n", str1);
    printf("%s\n", str2);

    _strcat(str1, " ");
    _strcat(cat1, str2);

    printf("%s\n", str1);
    printf("%s\n", str2);

    _strcat(str2, " ")
    _strcat(str2, "Hello World!");

    printf("%s\n", str1);
    printf("%s\n", str2);

    return (0);
}
