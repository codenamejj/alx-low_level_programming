#include "main.h"
/**
 * print_line - check the code
 * @n: num of characters
 *
 * Return: nothing.
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
			_putchar('_');
	}
	_putchar('\n');
}
