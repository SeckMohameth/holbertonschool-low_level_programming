#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * list_len - prints elements of list
 * @h: pointer to list
 * Return: number of nodes
**/

size_t list_len(const list_t *h)
{
	unsigned int i = 0;
	const list_t *list = h;

	while (list != NULL)
	{
		if (list->str == NULL)
		{
			printf("[0] (nil)\n");

		}
		list = list->next;
		i++;
	}

	return (i);
}
