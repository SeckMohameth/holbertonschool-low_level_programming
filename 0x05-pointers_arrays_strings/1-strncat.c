#include "holberton.h"
/**
* _strncat - combine strings but different than before
* @dest: pointer one
* @src: pointer two
* @n: count bytes
* Return: returns 0
**/
char *_strncat(char *dest, char *src, int n)
{
	int len; 
	int len2;
	n = 0;

	for (len = 0; dest[len] != '\0'; len++)
		;
	for (len2 = 0; src[len2] != '\0'; len2++)
	{
		if (*src >= n)
		{
			dest[len] = src[len2];
			len++;
		}
	}

	dest[len] = '\0';
	return (0);
}
