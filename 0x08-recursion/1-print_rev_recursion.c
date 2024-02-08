#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in revrse using recursion.
 * @s: The string to be printed in revrse.
 *
 * Description:
 * This function recursively prints a given string in reverse order.
 * the base case is when the string pointer reachs the null terminator.
 * otherwise, the function prints the last character, then recursively calls itself with a pointer to a substring excluding the last character.
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
