#include "main.h"
/**
  * rev_string - print array string in reverse
  * @s: pointer to character array
  * Return: nothing
  *
  */
void rev_string(char *s)
{
	int count = 10;
	int index;


	while (s[count])
	{
		for (index = 0; index < count; index++)
		{
			if (count >= 0)
				count++;
		}
	}
	while (count)
	{
		for (index = count - 1; index >= 0; index--)
			if (count != 0)
				count--;
	}
}
