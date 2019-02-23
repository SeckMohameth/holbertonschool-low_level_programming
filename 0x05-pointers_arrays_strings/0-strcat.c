#include "holberton.h"
/**
* _strcat - combine two strings
* @dest: pointer first array string
* @src: pointer to second string
* Return: returns string
**/
char *_strcat(char *dest, char *src)
{
	int n, length;


	for (length = 0; dest[length] != '\0'; length++)
		;

	for (n = 0; src[n] != '\0'; n++)
	{
		dest[length + n] = src[n];
	}

	dest[length + n] = '\0';
	return (dest);
}
