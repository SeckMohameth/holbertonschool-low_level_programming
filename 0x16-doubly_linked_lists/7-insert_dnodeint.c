#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at position
 * @h: pointer
 * @idx: index location
 * @n: int data
 * Return: returns address of new node
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		new = malloc(sizeof(*new));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *h;
		*h = new;
		return (new);
	}

	else
	{
		current = *h;
		for (idx--; idx > 0 && current != NULL; idx--)
			current = current->next;
		if (current == NULL)
			return (NULL);
		new = malloc(sizeof(*new));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = current->next;
		current->next = new;
		return (new);
	}
}
