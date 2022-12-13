#include <stdio.h>

/**
 * main - print the alphabeths in lowercase
 * followed by a new line
 * 
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int i;
	i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
