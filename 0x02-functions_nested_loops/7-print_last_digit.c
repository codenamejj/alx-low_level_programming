#include "main.h"
/**
  * print_last_digit - print last num
  * @n: num being checked
  *
  * Return: last digit r
  */
int print_last_digit(int n)
{
	int r;

	r = abs(n % 10);
	_putchar(r + '0');

	return (r);
}
