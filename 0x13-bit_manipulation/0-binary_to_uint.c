#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
* binary_to_uint - convert binary to unsigned int
* @b: pointer to char
* Return: unsigned int
**/

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int mo = 0;


	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		i++;
	}

	while (i > 0)
	{
		i--;
		if (*b != '0' && *b != '1')
			return (0);

		mo = 2 * mo + (*b++ - '0');

	}

	return (mo);

}
