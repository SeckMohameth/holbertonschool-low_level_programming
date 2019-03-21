#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_list - prints elements of list
* @h: pointer to list
* Return: number of nodes
**/

size_t print_list(const list_t *h)
{
	unsigned int i = 0;
	const list_t *list = h;

	while (list != NULL)
	{
		if (list->str == NULL)
		{
			printf("[0] (nil)\n");

		}
		else
		{
			printf("[%d] %s\n", list->len, list->str);

		}

		list = list->next;
		i++;
	}

	return (i);
}
