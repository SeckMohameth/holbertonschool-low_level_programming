#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
* add_node - prints elements of list
* @head: pointer to our head
* @str: point to string
* Return: number of nodes
**/
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->next != '\0')
		for (i = 0; new_node->str[i] != '\0'; i++)
		{
			;
		}
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
