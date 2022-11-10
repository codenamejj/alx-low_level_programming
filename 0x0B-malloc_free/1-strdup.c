#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space 
 * in memory, which contains a copy of the 
 * string given as a parameter.
 * @str: pointer to char type
 *
 * Return: pointer.
 */
char *_strdup(char *str)
{
	char *pointer;
	unsigned int size, i; /* size of array */
	size = 0;

	pointer = malloc(sizeof(str) * size + 1); /* +1 allocates new space */

	if (pointer == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		return (pointer);
	}
	
	free(pointer);
	return (0);
}
