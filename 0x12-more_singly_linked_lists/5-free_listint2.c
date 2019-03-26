#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* free_listint2 - frees listint_t list
* @head: pointer to head
* Return: returns void
**/

void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;
	listint_t *mo;

	while (ptr != NULL)
	{
		mo = ptr->next;
		free(ptr);
		ptr = mo;
		free(mo);
	}
	*head = NULL;
}
