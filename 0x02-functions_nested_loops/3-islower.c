#include "main.h"

/**
 * _islower - checks for lower case character
 * @c: parameter to be checked
 *
 * return: 1 if c is lowercase ,0 otherwise
 */
int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
	return (1);
    else
	return (0);
}
