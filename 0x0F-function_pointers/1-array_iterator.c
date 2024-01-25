#include "function_pointers.h"
#include <stdio.h>

/**
 * array_leterator - executes funtions on each element of array
 * @array: the array
 * @size: size of array
 * @action: function to perfom on each element of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)

	for (i = 0; i < size; i++)
		action(array[i]);
}
