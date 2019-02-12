#include "holberton.h"
/**
* _isalpha - return if letter, upper or lower
* @c: int c
* Return: returns 0
**/
int _isalpha(int c)
{
	if ('A' <= c && c <= 'Z')
	{
		return (1);
	}
	else if ('a' <= c && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}


}
