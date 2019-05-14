#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
* set_bit - return bit at index
* @n: unsigned long
* @index: index of bit
* Return: unsigned int
**/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int convert[1024];

	int i = 0;

	if (index > 63)
	{
		return (-1);
	}

	while (*n > 0)
	{
		convert[i] = *n % 2;
		*n = *n / 2;
		i++;
	}
	if (convert[index] == index)
	{
		index = 1;
	}
	return (i);
}
