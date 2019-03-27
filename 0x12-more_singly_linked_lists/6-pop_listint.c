#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* pop_listint - delete head node
* @head: double pointer
* Return: return data n
**/

int pop_listint(listint_t **head)
{
	int i;
	listint_t *ptr;


	if (*head == NULL || head == NULL)
		return (0);
	ptr = *head;
	i = ptr->n;
	*head = ptr->next;
	free(ptr);

	return (i);

}
