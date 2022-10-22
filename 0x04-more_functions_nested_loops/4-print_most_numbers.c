#include "main.h"
/**
 * print_most_numbers - print most numbers
 *
 * Return: nothing.
 */
void print_most_numbers(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		if (x != 50 && x != 52)
		_putchar(x);
	}
	_putchar('\n');
}
