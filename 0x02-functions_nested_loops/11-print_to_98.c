#include "main.h"
/**
 * print_to_98 - print natural num
 *@n: num
 *
 * Return: nothing
 */
void print_to_98(int n)
{
	n = 1;

	for (n >= 1; n <= 98; n++)
	{
		_putchar(n);
	}

	_putchar('\n');

	return;
}

