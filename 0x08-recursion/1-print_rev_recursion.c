#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - prints a string in revrse.
 * @s: pointer to string.
 *
 * Return: void.
 */
void _print_rev_recursion(const char *str)

{
	if (*str == '\0')
	{
		return;
	}

	_print_rev_recursion(str + 1);
	printf("%c", *str);
}
