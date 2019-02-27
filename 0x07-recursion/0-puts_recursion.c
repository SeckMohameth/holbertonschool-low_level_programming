#include "holberton.h"
/**
* _puts_recursion - print string
* @s: pointer to string
* Returns: always 0
**/
void _puts_recursion(char *s)
{
	int i;
	char *p = s;

	if (*p == s)
	{
		_putchar(p[i]);
		i++;
	}

	_putchar('\n');
}




/**
   No Loops. If we were using loops this
   is how you would do it.

 for (i = 0; p[i] != 0; i++)
        {
                _putchar(p[i]);
        }

        _putchar('\n');
**/
