#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Always 0.
 *
 */

void jack_bauer(void)
{
	int a;
	int b;

	for (int hour = 0; hour < 24; hour++)
	{
		for (int minute = 0; minute < 60; minute++)
		{
			_putchar (a / 10 + '0');
			_putchar (a % 10 + '0');
			_putchar (':');
			_putchar (b / 10 + '0');
			_putchar (b % 10 + '0');
			_putchar ('\n');
		}
	}
}
