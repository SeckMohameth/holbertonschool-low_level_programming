#include "holberton.h"
/**
*
*
*
**/
char *_strchr(char *s, char c)
{
	int i;
	char *p = s;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] == c)
		{
			s++;
		}
	}

	return (s);
	return (0);

}
