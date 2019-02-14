#include "holberton.h"
/**
* print_line - print lines
*@n: int n
* Return: returns nothing
**/
void print_line(int n)
{
	while (n > 0)
	{

		if (n == 0 || n < 0)
		{
		_putchar('\n');
		}

		n--;

		_putchar('_');
	}
	_putchar('\n');
}
