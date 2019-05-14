#include "holberton.h"
/**
 * _strncat - combine strings but different than before
 * @dest: pointer one
 * @src: pointer two
 * @n: count bytes
 *
 * Return: returns 0
 **/
char *_strncat(char *dest, char *src, int n)
{
	int c;

	char *dest1 = dest;

	c = 0;

	while (*dest1 != '\0')
	{
		dest1++;
	}

	while (*src != '\0' && c < n)
	{
		*dest1 = *src;

		dest1++;
		src++;
		c++;
	}

	return (dest);

}
