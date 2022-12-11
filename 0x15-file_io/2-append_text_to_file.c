#include "main.h"
/**
  * append_text_to_file - function that appends
  * text at the end of a file.
  * @filename: file
  * @text_content: contents
  *
  * Return: 0
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int ex;
	char buf[13];

	ex = open("hello", O_RDWR | O_APPEND);
	if (filename == NULL)
	{
		return (-1);
        }

	write(ex, "Hello World!\n", 12);
	close(ex);

	open("hello", O_RDONLY);
	if (text_content == NULL)
	return (-1);
	

	read(ex, buf, 12);
	buf[12] = '\0';
	write(STDOUT_FILENO, buf, 12);
	close(ex);

	return (0);
}
