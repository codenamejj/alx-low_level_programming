#include "main.h"
/**
 * print_triangle - print a triangle
 *
 * @size: size of triangle
 *
 * Return: nothing.
 */
void print_triangle(int size)
{
	int x, y;

	for (x = 0; x < size; x++)
	{
		for (y= x; y <= size; y++)
		{
			_putchar(' ');
		}
	
		for (y = 0; y <= x; y++)
		{	
			_putchar('#');

			if (size <= 0)
			_putchar('\n');

		}
		_putchar('\n');
	}

}
