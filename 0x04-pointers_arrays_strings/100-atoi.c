#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
* int _atoi - convert string to integer
* @s: pointer to char
* Return: returns an int
**/
int _atoi(char *s)
{
	char *sub;
	int ret = 0;
	signed char sign = 1;

	for (sub = s; (*sub < '0' || *sub > '9') && *sub; sub++)
	{
		if (*sub == '-')
			sign = -sign;
	}

	for (; *sub >= '0' && *sub <= '9'; sub++)
	{
		ret * = 10;

		if (sign == -1)
			ret -= *sub - '0';
		else
			ret += *sub - '0';
	}

	return (ret);
}
