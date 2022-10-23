#include "main.h"
/**
 * print_diagonal - draw diagonal line
 *
 *@n: number of print times
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i, x;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		x = i;
		while (x != 0 && x < n)
		{
			_putchar(' ');
			x--;
		}
		_putchar('\\');
		_putchar('\n');
	}
}
