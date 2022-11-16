#include <stdlib.h>
#include <stdio.h>
/**
  * main - print file it was
  * compiled from
  * Return: 0 always.
  */
int main(void)
{
	__FILE__;
	printf("%s\n", __FILE__);
	return (0);
}
