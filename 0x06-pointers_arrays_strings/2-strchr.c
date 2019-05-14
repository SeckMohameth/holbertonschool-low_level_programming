#include "holberton.h"
/**
* _strchr - lacate character in string
*@c: char c
*@s: pointer to string
*Return: returns always 0
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
