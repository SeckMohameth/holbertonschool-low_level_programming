#include "holberton.h"
/**
* print_numbers - print numbers 0 to 9
* Return: return nothing
**/
void print_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
