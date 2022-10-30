#include "main.h"
/**
 * _puts - print string to stdout.
 * @str: string
 *
 * Return: nothing.
 */
void _puts(char *str)
{
	while ((*str =! NULL))
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

}
