#include "holberton.h"
/**
*_pow_recursion - return value f x raised to power y
*@x: x value
*@y: value being raise to
*Return: returns int
**/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
