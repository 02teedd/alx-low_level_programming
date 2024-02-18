#include <stdio.h>

/**
 * _strlen_recusion - return the length of a string using recursion.
 * @s: The string to find the length of.
 *
 * return: The length of the string.
 *
 * Description:
 * the function recursively calculates the length of a string.
 * If the string pointer reachers the null terminator ('\0').
 * the length is 0. Otherwise, the function adds 1 to the length
 * calculated for then substring excluding the first character.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
/**
 * i love Nathi with all of my heart an she makes me smile every time i see her
 */
