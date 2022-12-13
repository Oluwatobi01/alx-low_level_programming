#include <stdio.h>

/**
 *  function that prints the last digit of a number
 *  Return value of the last digit
 */

int print_last_digit(int n)
{
	int last_digit = abs(n) % 10;

	printf("The last digit is: %d\n", last_digit);
	return (last_digit);
}
