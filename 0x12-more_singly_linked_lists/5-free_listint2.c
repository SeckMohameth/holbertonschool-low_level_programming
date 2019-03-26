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

	listint_t *ptr;

	if (head == NULL)
                return;


	while (*head)
	{
		ptr = *head;
		*head = ptr->next;

		free(ptr);

	}

}
