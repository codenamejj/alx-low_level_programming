#include <stdio.h>
/**
  * main - print possible combinations
  *
  * Return: 0 always
  */
int main(void)
{
	int x = 0;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);

		if (x != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
