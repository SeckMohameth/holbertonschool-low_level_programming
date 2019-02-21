#include "holberton.h"
/**
* puts_half - print half of string
*@str - char variable
* Return: returns nothing
**/
void puts_half(char *str)
{
	int length, half;

	for (length = 0; str[length] != '\0'; length++)
		;

	half = (length + 1) / 2;

	while (half < length)
	{
		_putchar(str[half]);
		half++;
	}

	_putchar('\n');

}
