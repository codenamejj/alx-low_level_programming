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

		_putchar(hour);
		_putchar(':');
		_putchar(minute);
		_putchar('\n');
		}
	}

	return;


}

