#include "main.h"
/**
 * jack_bauer - print minutes
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)

		{

		_putchar(hour + '0');
		_putchar(':');
		_putchar('0' + minute);
		_putchar('\n');

		}
	}

	return;


}

