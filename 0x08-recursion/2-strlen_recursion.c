#include "main.h"
/**
 * _strlen_recursion - check the code
 * @s: pointer to string
 * Return: length.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		s++;
	length++;
	}
	return (length);

}
