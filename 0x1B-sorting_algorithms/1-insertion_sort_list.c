#include "sort.h"

/**
 * insertion_sort_list - insertion algorithm
 * @list: double pointer to list
 * Return: Nothing
 **/

void insertion_sort_list(listint_t **list)
{
	listint_t *ptr = (*list)->next;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	while (ptr != NULL)
	{

		while (ptr->prev != NULL && ptr->n < ptr->prev->n)
		{
			ptr->prev->next = ptr->next;

			if (ptr->next)
				ptr->next->prev = ptr->prev;
			ptr->next = ptr->prev;
			ptr->prev = ptr->prev->prev;
			ptr->next->prev = ptr;

			if (ptr->prev == NULL)
				*list = ptr;
			else
				ptr->prev->next = ptr;

			print_list(*list);
		}
		ptr = ptr->next;
	}
}
