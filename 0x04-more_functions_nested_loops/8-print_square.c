#include "main.h"
/**
 * print_square - print a square
 *
 * @size: size of square
 *
 * Return: nothing.
 */
void print_square(int size)
{
	int x, y;

	if (size < 1)
		_putchar('\n');

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar('#');

		}
		_putchar('\n');
	}

}
