#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - print string
 * @s: pointer to string
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
	/* base */
	if (*s == '\0')
		return;
	_putchar(*s);
	_puts_recursion(s + 1);
		_putchar(10);
}
