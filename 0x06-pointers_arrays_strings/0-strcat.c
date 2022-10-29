#include "main.h"
/**
  * *_strcat - concatenates two strings
  * @dest: string1
  * @src: string2
  *
  * Return: Always 0.
  */
char *_strcat(char *dest, char *src)
{
	int s, i;

	s = 0;
	while (dest[s] != 0)
		s++;
	for (i = 0; src[i] != 0; i++)
		dest[s + i] = src[i];
	dest[s + i] = 0;
	return (dest);

	return (0);
}
