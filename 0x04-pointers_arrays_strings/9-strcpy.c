#include "holberton.h"
/**
* _strcpy - copy string from pointer
* @dest: dest pointer
* @src: src pointer
* Return: returns ret
**/
char *_strcpy(char *dest, char *src)
{

	char *ret = dest;

	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (ret);


}
