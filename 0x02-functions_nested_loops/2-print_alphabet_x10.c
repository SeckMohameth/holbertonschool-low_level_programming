#include "holberton.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 * Return: returns 0
 **/
void print_alphabet_x10(void)
{
	char ch;
	int n;

	for (n = 0; n <= 9; n++)
	{

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	_putchar(ch);

	}
	_putchar('\n');

	}
}
