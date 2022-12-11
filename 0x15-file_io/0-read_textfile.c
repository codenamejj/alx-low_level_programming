#include "main.h"
/**
  * read_textfile - reads a text file and prints it to the
  * POSIX standard output.
  * @filename: pointer to file
  * @letters: the number of letters it should read and print
  *
  * Return: the actual number of letters it could read and print
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buf[1024];

	fd = open("filename", O_RDONLY);
	if (fd == -1)
		return (0);

	read(fd, buf, letters);
	if (filename == NULL)
		return (0);

	write(STDOUT_FILENO, buf, letters);
	if (fd == -1)
		return (0);

	return (0);
}
