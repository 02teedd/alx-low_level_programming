#include <stdio.h>

/**
 * swap_int - swap the values of the two integers.
 * @a: The integers to be swapped
 * @b: the second integer to be swapped
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
/* the funtion that swaps the values of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
