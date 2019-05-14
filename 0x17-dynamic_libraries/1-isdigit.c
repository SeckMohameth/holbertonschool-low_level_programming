#include "holberton.h"
/**
 * _isdigit - check for a digit
 * @c: int for digit
 * Return: returns 0 and 1
 **/
int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	return (0);
}
