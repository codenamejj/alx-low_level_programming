#include "main.h"
#include <ctype.h>
/**
  * main - adds positive numbers
  * @argc: count
  * @argv: pointer char array
  * Return: 0
  */
int main(int argc, char **argv)
{
	int count, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	if (argc > 2)
	{
		for (count = 1; count < argc; count++)
		{
			if (atoi(argv[count]) == 0)
			{
				printf("Error\n");
				return (1);

			}
			else if (atoi(argv[count]) != 0 | atoi(argv[count]) % 10 == 0.0)
			{
				sum = sum + (atoi(argv[count]));

			}
		}
		printf("%d\n", sum);
		return (0);
	}
	return (0);
}
