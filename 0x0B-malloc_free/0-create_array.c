#include "main.h"
/**
 * create_array - creates an array of chars
 * @c: character variable
 * @size: unsigned int
 *
 * Return: NULL if size = 0.
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = malloc(sizeof(c) * size);

	if (size == 0 || ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		return (ar);
	}
	return (0);
}
