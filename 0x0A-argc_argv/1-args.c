#include <stdio.h>
#include <stdlib.h>
/**
  * main - print arguments passed
  * @argc: count
  * @argv: pointer char array
  * Return: nothing
  */
int main(int argc, char **argv)
{
	(void)argv;
	if (argc)
	{
		printf("%d\n", argc);
	}

	return (0);
}
