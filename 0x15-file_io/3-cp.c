#include "main.h"
/**
  * main - copies the content of a file to another file
  * @argc: count
  * @argv: value
  * Return: 0 if success or 1 if error
  */
int main(int argc, char argv[])
{
	int fd;
	char usage[] = "Usage: cp file_from file_to";
	char error[] = "error: Can't read from file NAME_OF_THE_FILE";

	fd = open("file_from", O_RDWR | O_APPEND);
	if (fd == -1)
	{
		exit(97);
	}
	if (!file_from | !file_from == NULL)
	{

		exit(98);
	}


		
	return (0);

}
