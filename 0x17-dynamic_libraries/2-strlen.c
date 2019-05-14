#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * _strlen - get length of string
 * @s: pointer char
 * Return: length
 **/

int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; n++)
	{
		s++;
	}

	return (n);
}
