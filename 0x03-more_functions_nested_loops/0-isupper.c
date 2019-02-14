#include "holberton.h"
/**
* _isupper - Check for uppercase letter
*@c: int for letter to see if uppercase
* Return: returns 1 or 0
**/
int _isupper(int c)
{
	if ('A' <= c && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
