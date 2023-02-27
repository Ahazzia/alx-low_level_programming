#include "main.h"

/**
 * rev_string - reversed string
 * @s: pointer variable
 * Return: certain value
 */
void rev_string(char *s)
{
int i = 0, j = 0;
char temp;

while (s[i] != '\0')
{
i++;
}
i--;
while (i > j)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
i--;
j++;
}
}
