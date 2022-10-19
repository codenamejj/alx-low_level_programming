#include "main.h"
/**
  * print_last_digit - print last num
  * @r: num being checked
  *
  * Return: 0 always
  */
int print_last_digit(int r)
{
	int n; /* last num of r */

	n = (r % 10);

	_putchar(n);


	return (n);
}
