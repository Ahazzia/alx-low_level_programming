#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
* Return: 0 If successful
*
* Description: Bla Bla Bla
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d" n);
	if (n > 5)
	{
	printf("and is greater than 5");
	}
	else if (n == 0)
	{
	printf("and is 0");
	}
	else if (n < 6 && n !=0)
	{
	printf("and is less than 6 and not 0");
	}
	else
	{
	printf("all tries turned out to be wrong");
	}
	return (0);
}
