#include "main.h"
/**
 * _puts_recursion - print string
 * @s: pointer to string
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
	/* base */
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar(10);
	}
}
