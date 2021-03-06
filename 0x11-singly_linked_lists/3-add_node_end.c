#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - prints elements of list
 * @head: pointer to our head
 * @str: point to string
 * Return: number of nodes
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *new_node;
	list_t *end_node;

	new_node = malloc(sizeof(list_t));
	end_node = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str != '\0')
	{
		for (i = 0; new_node->str[i] != '\0'; i++)
		{
			;
		}
	}


	new_node->len = i;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		end_node = *head;
		while (end_node->next != NULL)
		{
			end_node = end_node->next;
		}

		end_node->next = new_node;
	}
	return (end_node);
}
