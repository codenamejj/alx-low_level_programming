#include <stdio.h>
/**
* main - .print alphabet lowercase/uppercase
*
* Return: 0 always
*/
int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
	{
		putchar(alph);
	}

	putchar('\n');
	return (0);

}
