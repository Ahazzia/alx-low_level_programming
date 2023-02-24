#include "main.h"

/**
 * _isdigit - functions ckecks if c is digit
 * @c : is going to be used for check ups
 * Return: returns 1 if it's digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
