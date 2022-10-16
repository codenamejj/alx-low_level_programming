#include <stdio.h>
/**
* main - .print alphabet lowercase
*
* Return: 0 always
*/
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
		putchar('\n');
	}
	return (0);

}
