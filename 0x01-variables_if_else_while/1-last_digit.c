#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* Return: 0 If successful
*
* Description: Bla Bla Bla
*/
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	/* your code goes there */
	printf("Last digit of %d is %d ", n, last_digit);
	if (last_digit > 5)
	{
	printf("and is greater than 5\n");
	}
	else if (last_digit == 0)
	{
	printf("and is 0\n");
	}
	else if (last_digit < 6 && last_digit != 0)
	{
	printf("and is less than 6 and not 0\n");
	}
	else
	{
	printf("all tries turned out to be wrong");
	}
	return (0);
}
