#include "main.h"
/**
  * print_rev - prints in reverse
  * @s: pointer to character
  *
  * Return: nothing
  */
void print_rev(char *s)
{
	int count = 1;

	while (*s != '\0')
	{
		s++;
		count++;
	}

	while (count - 1 >= 0)
	{
		_putchar(*s);
		s--;
		count--;
	}

	_putchar('\n');
}
