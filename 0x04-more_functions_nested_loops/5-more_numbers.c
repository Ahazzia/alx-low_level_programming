#include "main.h"

/**
 * more_numbers - print 1 to 14 10 times
 * Return: 0 for success
 */
void more_numbers(void)
{
int i;
int j;

for (i = 0; i < 15; i++)
{
_putchar('\n');
for (j = 0; j < 11; j++)
{
_putchar(j + '0');
}
}
}
