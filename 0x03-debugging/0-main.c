#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
        int i;

        i = 98;

	if (i > 0)
	{
		printf("%i is positive\n", i);
	}

	if (i == 0)
	{
		printf("%i is zero\n", i);
	}

	if (i < 0)
	{
		printf("%i is negative\n", i);
	}

        return (0);
}
