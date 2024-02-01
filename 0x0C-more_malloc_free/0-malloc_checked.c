#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc-checked - allocate memory using malloc
 * @b: sizeof memory
 * return: pointer to new memory allocated
 */

void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);
}
