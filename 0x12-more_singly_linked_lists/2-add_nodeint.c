#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* add_nodeint - add new node to beginning
* @head: double pointer
* @n: constant int
* Return: address of new elements
**/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	new_node->n = n;

	if (new_node == NULL)
		return (NULL);

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
