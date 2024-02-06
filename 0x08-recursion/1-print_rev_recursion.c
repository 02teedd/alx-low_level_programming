#include <stdio.h>

void _print_rev_recursion(const char *str)

{
	if (*str == '\0')
	{
		return;
	}

	_print_rev_recursion(str + 1);
	printf("%c", *str);
}
