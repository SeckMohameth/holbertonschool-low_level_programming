#include "holberton.h"
/**
 * print_alphabet - print alphabet
 * Description: print alphabet using _putchar
 * Returns: nothing
 **/
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
