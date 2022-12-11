#include "main.h"
/**
  *
  *
  *
  *
  *
  */
int create_file(const char *filename, char *text_content)
{
	int fd;
	char buf[1024];
	int size = sizeof(text_content);

	fd = open("filename", O_CREAT | O_RDWR | O_APPEND);
	if (filename == NULL)
	{
		write(fd, "", 0);
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
	close (fd);

	return (0);

}
