#include "main.h"
/**
 * _strchr - funtion name 
 * @s: paramter s
 * @c: parameter c
 * Return: 
 */

char *_strchr(char *s, char c);
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++
	}

		if (*s == c)
		        return (s);
		return (NULL);
}
