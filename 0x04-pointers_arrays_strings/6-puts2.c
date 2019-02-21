#include "holberton.h"
/**
* puts2 - print every other characteer 2
*@str: pointer to a string
*Return - nothing
**/
void puts2(char *str)
{
	char *giggles = str;

	while (*str++)
		;

	while (giggles < str)
	{
		_putchar(*giggles);
		giggles += 2;
	}
	_putchar('\n');
}
