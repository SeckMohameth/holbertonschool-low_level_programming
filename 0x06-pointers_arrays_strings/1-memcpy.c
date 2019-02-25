#include "holberton.h"
/**
* _memcpy - copy memory
*@dest: destination
*@src: source
*@n: number of bytes
*Return: returns destination
**/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *p = src;

	while (i < n)
	{
		dest[i] = src[i];
		p++;
		i++;
	}

	return (dest);
}
