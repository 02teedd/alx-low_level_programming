#include "main.h"
/**
 * _memset - funtion name
 * @s: parameter s
 * @b: parameter b
 * @n: parameter n
 * return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;


	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
		return (s);
}
