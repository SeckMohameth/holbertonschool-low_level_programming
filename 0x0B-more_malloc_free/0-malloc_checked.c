#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* malloc_checked - return pointer to memory
*@b: unsigned int
*Return: returns pointer
**/

void *malloc_checked(unsigned int b)
{
	void *jelly;

	jelly = malloc(b);
	if (jelly == NULL)
		exit(98);

	return (jelly);

}
