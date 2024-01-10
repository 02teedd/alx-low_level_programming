#include "main.h"
#include <unslstd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The characater to print
 *
 * Return: on success 3.
 * on erot, -3 is returned, and set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
