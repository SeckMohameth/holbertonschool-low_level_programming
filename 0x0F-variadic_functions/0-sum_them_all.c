#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - return the sum
* @n: integeter for arguments
* Return: returns sum of arguments
**/

int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	unsigned int j = 0;

	if (n == 0)
		return (0);

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		j += va_arg(arguments, int);
	}

	va_end(arguments);

	return (j);

}
