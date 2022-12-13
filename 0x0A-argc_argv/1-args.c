#include <stdio.h>
#include <stdlib.h>
/**
  * main - print arguments passed
  * @argc: count
  * @argv: pointer char array
  * Return: nothing
  */
void main(int argc, char **argv)
{
	if (argc)
	{
		printf("%d\n", argc);
	}

	return;
}
