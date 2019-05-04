#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print all elements
 * @h: pointer to head
 * Return: returns elements
 **/

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
