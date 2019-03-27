#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* sum_listint - add sum of nodes
* @head: point to head
* Return: sum
**/

int sum_listint(listint_t *head)
{
	int data = 0;
	listint_t *ptr;


	while (head != NULL)
	{
		ptr = head;
		head = ptr->next;
		data += ptr->n;

	}

	return (data);
}
