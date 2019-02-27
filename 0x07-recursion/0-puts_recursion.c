#include "holberton.h"
/**
* _puts_recursion - print string
* @s: pointer to string
* Returns: always 0
**/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar ('\n');
	}
	else
	{
		_putchar(*s);
	_puts_recursion(s + 1);
	}
}
