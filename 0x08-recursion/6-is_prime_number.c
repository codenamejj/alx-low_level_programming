#include "main.h"
/**
 * is_prime_number - return prime number.
 * @n: prime number
 *
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	int z;

	z = 2;

	if (n % z == 0 || n % z == 1)
	{
		if (z > 1)
			return (1);
		n++;
		z++;
	}
	else
		return (0);
	return (is_prime_number(n));
}
