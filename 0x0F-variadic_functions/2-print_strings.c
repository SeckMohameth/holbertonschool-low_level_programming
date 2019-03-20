#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - print strings w/ new line
* @separator: string printed between numbers
* @n: integers passed
**/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *j;

	va_list lengthOfArguments;


	va_start(lengthOfArguments, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(lengthOfArguments, char *);


		if (j == NULL)
		{
			printf("(nil)");
		}
		else
		{
		printf("%s", j);
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(lengthOfArguments);
	       printf("\n");
}
