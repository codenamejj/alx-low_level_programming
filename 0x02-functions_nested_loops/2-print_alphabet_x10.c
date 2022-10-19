#include "main.h"
/**
 * print_alphabet_x10 - print lowercase loop
 *
 * Return:  nothing.
 */
void print_alphabet_x10(void)
{
	int y = 0;

	for (y = 0; y <= 10; y++)
	{
		char x;

		for (x = 'a'; x <= 'z'; x++)

			_putchar(x);


	_putchar('\n');
	}
	return;


}
