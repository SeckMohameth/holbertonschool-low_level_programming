#include "holberton.h"
/**
* factorial - return factorial number
*@n: number being passed
*Return: returns factorial
**/
int factorial(int n)
{

	if (n == 1)
		return (1);
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
