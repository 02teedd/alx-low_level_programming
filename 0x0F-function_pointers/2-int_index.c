#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searces for an integer
 * @array: array to search from
 * @size: size of array
 * @cmp: function pointers
 * return: index of the matched character ot character or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
