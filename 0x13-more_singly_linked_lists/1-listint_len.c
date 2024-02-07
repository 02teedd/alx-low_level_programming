#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - counts the number of elements in a 'limked_listint_t' list.
 * @h: the head of the limked_listint_t' list.
 *
 * Return: the number  of nodes int the list, or 0 if the list is empty or NULL.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp = h;

	while (temp)
	{
		++count;
		temp = temp->next;
	}

	return (count);
}
