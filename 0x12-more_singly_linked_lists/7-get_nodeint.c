#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* get_nodeint_at_index - return number of elements
* @head: pointer to listint_t
* @index: index of node
* Return: return node
**/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	listint_t *ptr;

	if (head == NULL)
		return (NULL);



	while (counter <= index &&  head != NULL)
	{
		ptr = head;

		head = ptr->next;

		counter++;

	}


	if (counter < index)
		return (NULL);

	return (ptr);
}
