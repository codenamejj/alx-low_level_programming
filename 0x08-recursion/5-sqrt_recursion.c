#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int 
 *
 * Return: natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * _sqrt_recursion(n - 1));
}
