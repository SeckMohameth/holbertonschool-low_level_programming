#include "holberton.h"
/**
* _strlen_recursion - get length of string
* @s: pointer to string
* Return: returns length
**/
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
