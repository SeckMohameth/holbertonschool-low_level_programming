#include "holberton.h"
/**
 * print_last_digit - output last digit
 * @n: int for remainder
 * Return: returns last digit
 **/
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		n = -n;
	}

	_putchar(n + '0');
	return (n);
}
