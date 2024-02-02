#include <stdio.h>
#include <string.h>

#include "lists.h" /* Assuming the list_t structure is defined here */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		/* checks for NULL string and print "(nil)" only if necessary */
		printf("[%d] %s\n", h->len, h->str != NULL ? h->str : "(nil)");
		nodes++;
		h = h->next;
	}

	return nodes;
}
