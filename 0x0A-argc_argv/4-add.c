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
	int sum, count, x;

	sum = 0;
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (count = 1; count < argc; count++)
	{
		for (x = 0; argv[count][x] != 0; x++)
		{
			if (!isdigit(argv[count][x]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
	}
	printf("%d\n", sum);
	return (0);
}
