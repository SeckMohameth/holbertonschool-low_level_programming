#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* print_listint - print elements of list
* @h: pointer to list type
* Return: elements
**/

size_t print_listint(const listint_t *h)
{
	int i = 0;

	const listint_t *list = h;

		while (list != NULL)
		{
		printf("%d\n", list->n);

		list = list->next;

		i++;

		}

	return (i);

}
