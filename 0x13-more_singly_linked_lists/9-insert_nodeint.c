#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: A pointer to the head of the linked list.
 * @Target_index: The index of the node where the new node should be inserted
 * @new_value: The integer value to store in the new node
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int targetindex, int new_value)
{
	listint_t *new_node, *current;

	if (head == NULL || targetindex > listint_len(*head))
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = new_value;

	current = *head;
	{
	
	unsigned int i;

	for (i = 0; i < targetindex && current != NULL; i++);
	}

	{
		current = current->next;
	}

	if (targetindex == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else if (current == NULL)
	{
		current->next = new_node;
	}
	else
	{
		new_node->next = current->next;
		current->next = new_node;
	}

	return (new_node);
}
