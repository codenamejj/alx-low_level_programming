#include "main.h"
/**
 * _strlen_recursion - check the code
 * @s: pointer to string
 * Return: length.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (_strlen_recursion(s + 1) + 1);
	return (0);
}
