#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc-checked - allocate memory using malloc.
 * @b: size of memory to allocated.
 *
 * return: pointer to new memory allocated.
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

		return (p);
}
