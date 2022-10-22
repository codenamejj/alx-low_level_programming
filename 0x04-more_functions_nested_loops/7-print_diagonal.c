#include "main.h"
/**
 * main - check the code
 *
 *@n: number of print times
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int r;

	if (n > 0)
	{
		for (r = 0; r < n; r++)
		{
			_putchar('\\');

		}
	}
	else
		_putchar('\n');

}
