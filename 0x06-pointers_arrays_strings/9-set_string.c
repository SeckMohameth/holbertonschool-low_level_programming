#include "holberton.h"
/**
* set_string - change value of pointer to char
*@s: pointer to pointer
*@to: pointer to char
*Return: nothing
**/
void set_string(char **s, char *to)
{
	*s = to;
}
