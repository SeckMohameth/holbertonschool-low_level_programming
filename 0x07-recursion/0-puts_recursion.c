#include "holberton.h"
/**
* _puts_recursion - print string
* @s: pointer to string
* Returns: always 0
**/
void _puts_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return;

	_putchar(s[i]);
	_puts_recursion(s + 1);
	_putchar('\n');
}
