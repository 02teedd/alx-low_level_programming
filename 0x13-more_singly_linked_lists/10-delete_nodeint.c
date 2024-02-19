#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node ata given index of a linked list.
 * *head: A pointer to the head of the linked list
 * index: The index of the node that should be deleted. index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL || index > listint_len(*head))
	{
		return (-1);
	}

	temp = *head;

	for (; i < index && temp != NULL; i++)
	{
		prev = temp;
		temp = temp->next;
	}

	if (temp == NULL)
	{
		return (-1);
	}
	
	if (prev == NULL)
	{
		*head = temp->next;
	}
	else
	{
		prev->next = temp->next;
	}

	free(temp);
	return (1);
}
