#include <stdlib.h>
#include <stdio.h>
/**
* main - print 00 to 99
* Return: returns 0 for this
**/
int main(void)
{
	int x;
	int z;

	for (x = '0'; x <= '9'; x++)
	{
		for (z = '0'; z <= '9'; z++)
		{
			putchar(x);
			putchar(z);
			if (x < '9' || z < '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
		putchar('\n');
		return (0);
}
