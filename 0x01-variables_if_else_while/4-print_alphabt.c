
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print alphabet in lowercase
 * Return: returns 0
 **/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
