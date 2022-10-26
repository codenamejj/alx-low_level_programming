#include "main.h"
/**
 * _puts - pring string.
 * @str: string
 *
 * Return: nothing.
 */
void _puts(char *str)
{

	while (*str != 0)
	{
		_putchar(str);
		str++;
	}

}
