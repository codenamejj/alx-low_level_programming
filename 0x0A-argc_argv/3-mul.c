#include "main.h"
/**
  * main - multiplies two numbers
  * @argc: count
  * @argv: pointer char array
  * Return: 0
  */
int main(int argc, char **argv)
{
	int count, mul;

	if (argc > 2)
	{
		for (count = 1; count < argc; count++)
		{
			mul = atoi(argv[1]) * atoi(argv[2]);
		}
		printf("%d\n", mul);
	}
	else
	return (1);

	return (0);
}
