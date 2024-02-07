#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of a 'listint_t' linked list.
 * @head: The head of the ;listint_t; list.
 * @index; The index of the node to return (starting at 0).
 *
 * Return: The nth node of the list, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	return (current);
}
