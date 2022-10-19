#include "main.h"
/**
 * _isalpha - check lowercase & uppercase.
 *
 * @c: the character to checked
 *
 * Return: 1 if c is lowercase or uppercase 0 otherwise
 *
 */
int _isalpha(int c)
{
	if (c >= 'a')
	{
		if (c <= 'z')
		{
			return (1);
		}

		return (1);
	}

	if (c >= 'A')
	{
		if (c <= 'Z')
		{
			return (1);
		}


		return (1);
	}

	else
	{
		return (0);
	}



	return (0);

}
