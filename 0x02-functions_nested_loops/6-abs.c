#include "holberton.h"
/**
 * _abs - print absolute value
 * @n: int n
 * Return: returns 0
 **/
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else if (n > 0)
	{
		return (1);
	}

	return (0);
}
