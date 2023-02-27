#include "main.h"

/**
 * puts2 -prints half of a string
 * character, followed by a new line
 * @str: pointer variable
 * Return: some value for success
 */
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (i % 2 == 0)
_putchar(str[i]);
i++;
}
_putchar('\n');
}
