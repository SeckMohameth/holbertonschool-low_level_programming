#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - add a node to begining
 * @head: double pointer
 * @n: member int value
 * Return: returns address of new node
 **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
