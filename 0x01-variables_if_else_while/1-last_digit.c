#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - .print random num
 *
 * Return: 0 always
 */
int main(void)
{
	int n;
	int z;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	z = n % 10;

	if (n > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, z);
	}

	if (n == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, z);
	}

	if (n < 6 && n != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, z);
	}
	return (0);
}
