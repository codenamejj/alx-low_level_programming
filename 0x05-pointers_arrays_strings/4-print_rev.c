#include "main.h"
/**
  * print_rev - prints in reverse
  * @s: pointer to character
  *
  * Return: nothing
  */
void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	s--;
	while (count)
	{
		_putchar(*s);
		s--;
		count = count - 1;
	}

	_putchar('\n');
}
