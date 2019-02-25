#include "holberton.h"
/**
* _memset - fill memory with constant byte
*@s: points to memory
*@b: constant byte
*@n: number of byte memory
*Return: returns pointer to are s
**/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *p = s;

	while (i < n)
	{
		*p = b;
		p++;
		i++;
	}

	return (s);
}
