#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* listint_len - return number of elements
* @h: pointer to listint_t
* Return: return number of elements
**/

size_t listint_len(const listint_t *h)
{
	int i = 0;

	const listint_t *list = h;

	while (list != NULL)
	{
		list = list->next;

			i++;
	}

	return (i);

}
