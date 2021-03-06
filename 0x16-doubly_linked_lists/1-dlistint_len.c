#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* dlistint_len - number of elements
* @h: pointer to header
* Return: returns number of elements
**/

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);
}
