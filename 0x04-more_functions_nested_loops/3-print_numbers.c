#include "main.h"

/**
 * print_numbers - function to print the numbers from 0 to 9
 * Return: 0 fro success
 */

void print_numbers(void)
{
int c;
c = 0;
for (c = 0; c <= 9; c++)
{
_putchar(c + '0');
_putchar('\n');
}
return (0);
}
