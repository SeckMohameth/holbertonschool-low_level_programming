#include "holberton.h"
/**
 * puts2 - print every other characteer 2
 * @str: pointer to a string
 * Return - nothing
 **/
void _puts(char *str)
{
	char *mo = str;

	while (*str++)
		;

	while (mo < str - 1)
	{
		_putchar(*mo);
		mo += 2;
	}
	_putchar('\n');
}
