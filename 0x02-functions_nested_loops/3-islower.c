#include "main.h"
/**
 * _islower - check lowercase.
 *
 * @c: the character to checked
 *
 * Return: 1 if c is lowercase 0 otherwise
 *
 */
int _islower(int c)
{

	if (c >= 'a')
	{
		if (c <= 'z')
		{
			return (1);

		}
		return (1);
	}
	else
	{
		return (0);
	}
}
