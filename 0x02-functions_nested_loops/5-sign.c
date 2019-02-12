#include "holberton.h"
/**
* print_sign - print signs and return
*@n: int for n
* Return: returns nothing
**/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	return (0);
}
