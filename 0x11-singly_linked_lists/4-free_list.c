#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
* free_list - free list
* @head: pointer to head
* Return: nothing
**/
void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}

}
