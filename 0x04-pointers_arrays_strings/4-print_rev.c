#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
* print_rev - print string
* @s: pointer to string
* Return: void
**/

void print_rev(char *s)
{
	while (*s != '\0')
	{
		s++;
	}
	s--;
	while (*s > '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
