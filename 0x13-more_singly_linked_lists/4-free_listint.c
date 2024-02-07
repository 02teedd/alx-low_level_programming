#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a 'listint_t' list.
 * @head: Double pointer to the head of the list.
 *
 * return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
	free(head);
	head = temp;
	}
}
