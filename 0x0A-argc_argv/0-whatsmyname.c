#include "main.h"
/**
  * main - print program name
  * @argc: count
  * @argv: pointer char array
  * Return: 0
  */
int main(int argc, char **argv)
{
	if (argc)
	{
		printf("%s\n", *argv);
	}

	return (0);
}
