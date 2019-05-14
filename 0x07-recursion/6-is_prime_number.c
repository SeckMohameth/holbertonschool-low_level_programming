#include "holberton.h"
/**
*
*
*
**/
int is_prime_number(int n)
{
	if (n == 1)
		return (1);
	return is_prime_number(n + 1);
}
