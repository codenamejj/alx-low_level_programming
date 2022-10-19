#include "main.h"
/**
 * print_alphabet_x10 - print lowercase loop
 *
 * Return:  nothing.
 */
void print_alphabet_x10(void)
{
	int y = 1;

	for (y = 1; y <= 10; y++)
	{
		char x;

		for (x = 'a'; x <= 'z'; x++)

			_putchar(x);


	_putchar('\n');
	}
	return;


}
