#include "main.h"
/**
  * main - print all arguments received
  * @argc: count
  * @argv: pointer char array
  * Return: 0
  */
int main(int argc, char **argv)
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}
