#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - print numbers w/ new line
* @separator: string printed between numbers
* @n: integers passed
**/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int j = 0;

	va_list lengthOfArguments;

	if (separator == NULL)
		return;

	va_start(lengthOfArguments, n);

	for (i = 0; i < n; i++)
	{

		j = va_arg(lengthOfArguments, int);

		printf("%d", j);

		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(lengthOfArguments);

}
