#include "main.h"
/**
  * swap_int - swap values
  * @a: value 1
  * @b: value 2
  *
  * Return: nothing
  */
void swap_int(int *a, int *b)
{
	int new = *a;
	*a = *b;
	
	*b = new;

}
