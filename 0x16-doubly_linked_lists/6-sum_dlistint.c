#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - return sum
 * @head: pointer
 * Return: returns address of new node
 **/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = ptr->next;
		sum += ptr->n;
	}
	return (sum);
}
