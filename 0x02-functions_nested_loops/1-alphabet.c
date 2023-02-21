#include <stdio.h>
/**
 * main - entry
 * Return: 0 always
 * Description: lowercase letters
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line
*/
void print_alphabet(void)
{
for (char c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
}
int main(void)
{
print_alphabet();
return (0);
}
