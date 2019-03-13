#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_name - function that prints name
* @name: name of person
* @f: pointer to function
* Return: returns nothing
**/

void print_name(char *name, void (*f)(char *))
{

	void print_name_as_is(char *name);
	void print_name_uppercase(char *name);


	if (name != NULL || f != NULL)
		f(name);


}
