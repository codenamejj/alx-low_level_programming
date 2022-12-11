#include "main.h"
/**
  * create_file - a function that creates a file
  * @filename: pointer to file
  * @text_content: contents 
  * Return: O
  *
  */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int size = sizeof(text_content);
	char buf[1024];

	fd = open("filename", O_CREAT | O_RDWR | O_APPEND);
	if (filename == NULL)
	{
		write(fd, "", 1);
		return (-1);
	}

	read(fd, buf, size);
	if (fd == -1)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
	write(STDOUT_FILENO, buf, size);
	close(fd);

	return (0);

}
