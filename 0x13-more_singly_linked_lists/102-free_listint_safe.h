#include <stdlib.h>

/**
 * struct_listint_s - linked list node structure
 *
 * @n: integer stored in the node
 * @next: pointer to the nest node in the list
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head pointer of the linked list
 *
 * Return: the number of the nodes in the list, or 0 if the list is NULL
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return count;
}
