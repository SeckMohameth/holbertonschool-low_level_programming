#include "function_pointers.h"
/**
* int_index - compare array elements
*@array: array
*@size: size of the array
*@cmp: compare function
*Return: returs int
**/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (!cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		cmp(array[i]);

		if (cmp(array[i]) != 0)
		{
			return (i);
		}

	}

	return (array[i]);
}
