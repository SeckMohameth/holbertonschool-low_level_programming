#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - insert node at position
 * @head: pointer
 * @index: index location
 * Return: returns 1 or -1
 **/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *prev;

	if (head == NULL)
		return (-1);

	for (current = *head; current != NULL && index > 0; index--)
	{
		prev = current;
		current = current->next;
	}
	if (current == NULL)
		return (-1);
	if (current == *head)
		*head = current->next;
	else
		prev->next = current->next;
	free(current);
	return (1);
}
