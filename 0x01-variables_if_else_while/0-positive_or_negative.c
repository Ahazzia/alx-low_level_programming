#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - Entry point
* Return: 0 If successful
*
* Description: Bla Bla Bla
*/
int main(void)
{
int a = 1103515245;  /* multiplier */
int c = 12345;/* increment */
int m = 2147483648;  /* modulus */
int x = time(NULL);  /* seed */
int n;
x = (a * x + c) % m;  /* update seed */
n = x % 100; /* generate a random integer between 0 and 99 inclusive */
/* your code goes there */
if (n > 0)
{
printf("%d is positive ", n);
}
else if (n == 0)
{
printf("%d is zero ", n);
}
else
{
printf("%d is negative ", n);
}
return (0);
}
