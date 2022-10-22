#include "main.h"
/**
 * more_numbers - print numbers
 *
 * Return: nothing.
 */
void more_numbers(void)
{
		int x, j;

		for (x = 0; x < 11; x++)
		{
			for (j = 0; j < 15; j++)
			{
				_putchar(j);
			}

		_putchar(x);

		_putchar('\n');
		}

}
