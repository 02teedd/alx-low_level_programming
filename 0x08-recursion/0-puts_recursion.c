#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints string
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
	}
	else
	{
		printf("%c", *s);
		_puts_recursion(s + 1);
	}
}
