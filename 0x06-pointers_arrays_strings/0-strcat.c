#include <stdio.h>

/** _strcat -concatinates two strings
 * @dest: destination string
 * src - source string
 */

char *_strcat(char *dest, char *src)
{
	char *dest_end = dest;

	while (*dest_end != '\0')
	{
		dest_end++;
	}

	while (*src != '\0')
	{
		*dest_end++ = *src++;
	}

	*dest_end = '\0';

	return (dest);
}
