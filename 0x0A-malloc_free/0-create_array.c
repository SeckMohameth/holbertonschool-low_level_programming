#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* create_array - create an array of chars
*@size: unsigned int
*@c: char in array
*Return: returns pointer p
**/
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return ('\0');

	p = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);
}
