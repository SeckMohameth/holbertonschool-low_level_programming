#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - free node
 * @head: double pointer
 * Return: returns address of new node
 **/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
