#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all single base 10 digits
 * Return: returns 0
 **/
int main(void)
{
        char n;

        for (n = '0'; n <= '9'; n++)
        {
                putchar(n);

        }
        putchar('\n');
        return (0);
}
