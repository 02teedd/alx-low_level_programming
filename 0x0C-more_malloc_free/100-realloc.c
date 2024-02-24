#include "main.h"
#include <stdlib.h>
/**
 * _realloc - realocate a memory in th heap
 * @ptr: former pointer to the old memory allocated
 * by malloc
 * @old_size: old size allocate by malloc in the heap
 * @now_size: new size allocate by the _realloc function
 * Return: pointer to the newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
{
	char *p;
	size_t i, max = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size)
			return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size)
		if (p == NULL)
			return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; < max; i++)
		p[i] = oldp[i];
	free(ptr);
	return (p);
}
