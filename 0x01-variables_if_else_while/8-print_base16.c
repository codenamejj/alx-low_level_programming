#include <stdio.h>
/**
* main - .print base 16
*
* Return: 0 always
*/
int main(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
		printf("%d", x);

	for (y = 'a'; y < 'g'; y++)
		printf("%c", y);

	printf("\n");

	return (0);

}
