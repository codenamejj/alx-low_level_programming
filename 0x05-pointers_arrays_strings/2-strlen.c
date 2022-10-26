#include "main.h"
/**
  * _strlen - return string length
  * @s: string
  *
  * Return: Always 0.
  */
int _strlen(char *s)
{
	int string_count;

	string_count = 0;

	while (*s != 0)
	{
		s++;
			string_count++;
	}
	return (string_count);

	return (0);
}
