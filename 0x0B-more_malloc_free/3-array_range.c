#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
* array_range - create array of integers
*@min: pointer to min string
*@max: pointer to max
*Return: array
**/

int *array_range(int min, int max)
{
	int *array;
	int *p;

	int diff = (max - min) + 1;

	if (max < min)
		return (NULL);

	p = array = malloc(sizeof(int) * diff);
	if (array == NULL)
		return (NULL);

	while (min <= max)
	{
		*array = min;
		min++;
		array++;

	}

	return (p);
}
