#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "holberton.h"
/**
 * rev_string - print string
 * @s: pointer to string
 * Return: void
 **/

void rev_string(char *s)
{
	char temp;
	char *last = s;
	char *first = s;


	while (*last != '\0')
	{
		last++;
	}
	last--;
	while (first < last)
	{
		temp = *last;
		*last = *first;
		*first = temp;

		first++;
		last--;
	}
}
