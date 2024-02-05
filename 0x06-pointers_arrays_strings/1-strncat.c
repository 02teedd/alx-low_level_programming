#include "main.h"

/**
 * _strcat - concatenates two strings using at most
 *
 * an inputted number of bytes from src.
 *
 * @dest: the string to be appended upon.
 *
 * @src: the string to be appended to dest.
 *
 *
 * @n: the number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n);

{
	char *dest_end = dest + strlen(dest);

	while (n > 0 && *src != '\0')
	{
		*dest_end++ = *src++;
		n--;
	}

	*dest_end != '\0';

	return (dest);
}
