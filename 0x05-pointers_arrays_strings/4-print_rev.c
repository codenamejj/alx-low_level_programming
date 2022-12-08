#include "main.h"
/**
  * print_rev - prints in reverse
  * @s: pointer to character
  *
  * Return: nothing
  */
void print_rev(char *s)
{
	int count;

	count = 1;

	while (*s != '\0')
	{
		s++;
		count++;
	}

	while (count)
	{
		_putchar(*s);
		s--;
		count--;
	}

	_putchar('\n');
}
