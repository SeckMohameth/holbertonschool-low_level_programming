#include "holberton.h"
/**
*_print_rev_recursion - print string in revers
*@s: pointer to string
*Return: retunrs nothing
**/
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);

	_putchar(s[i]);

}
