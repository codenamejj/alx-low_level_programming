#include <stdio.h>
/**
* main - .print alphabet lowercase/uppercase
*
* Return: 0 always
*/
int main(void)
{
	char alph;
	char alphc;

	for (alph = 'a'; alph <= 'z'; alph++)

	{
		putchar(alph);
	}

	for (alphc = 'A'; alphc <= 'Z'; alphc++)
	{
		putchar(alphc);
	}

	putchar('\n');
	return (0);
}
