#include "main.h"
/**
 * create_array - creates an array of chars
 * and initializes it with a specific char.
 * @c: vector
 * @size: array size
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
		if (size > 0)
		{
			return (ar);
		}
	}
	free (ar);
	return (0);
}
