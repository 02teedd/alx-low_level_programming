#include "main.h"
#include "stdlib.h"
/**
 * _strdup - return a pointer to a newly allocated
 * space in memory also duplicate the string it holds
 * to the new space
 *
 * @str: initial input string
 *
 * Return: pointer to the memory allocated
 * which is an array of characters
 */
char *_strdup(char *str)
{

	int len;
	char *dup_str;
	int i;


	if (str == NULL)
	{
		return (NULL);
	}

	for (len = 0; str[len]; len++)
	{
	}

	dup_str = malloc(len + 1);

	if (dup_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		dup_str[i] = str[i];
	}

	dup_str[len] = '\0';

	return (dup_str);
}
