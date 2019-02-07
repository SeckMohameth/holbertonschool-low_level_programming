#include <stdio.h>
/**
 * main - print size of data types
 * Description: It will print size of data types on computer
 * Return: returns 0
 **/
int main(void)
{
	printf("Size of a char: %zd byte(s)\n", sizeof(char));
	printf("Size of an int: %zd bytes(s)\n", sizeof(int));
	printf("Size of a long int: %zd byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zd byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zd byte(s)\n", sizeof(float));
	return (0);
}
