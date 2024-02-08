#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in revrse using recursion.
 * @s: The string to be printed in revrse.
 *
 * Description:
 * This function recursively prints a given string in reverse order.
 * The base case is when the string pointer reachs the null terminator.
 * Otherwise, the function prints the last character, then recursively calls
 * itself with a pointer to a substring excluding the last character.
 *
 * Example:
 * _print_rev_recursion("hello");
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
