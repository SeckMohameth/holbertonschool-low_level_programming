#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - executes a function
 * @array:
 * @size: size of array
 * @action: pointer to function you need to use
 * Return: returns nothing
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
                return;


	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}

}
