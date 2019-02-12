#include "holberton.h"
/**
* _islower - check for lowercase
*@c: int for c
* Return: returns 1 or c
**/
int _islower(int c)
{

	if ('a' <= c && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
