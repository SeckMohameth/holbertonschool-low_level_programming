#include "holberton.h"
/**
*
*
*
**/
char *_strcat(char *dest, char *src)
{
	int n, length;
	n = 0;

	for (length = 0; dest[length] != '\0'; length++)
		;
	
	while(src[n] != '\0')
	{
		dest[length] = src[n];
		n++;
		length++;
	}
	
	dest[length] = '\0';
	return (0);
}
