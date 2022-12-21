#include "main.h"

/**
 * cap_string - capitalizes every first letter of a word in a string
 * separators of words are: space, tabulation
 * new line
 * @s: POinter to string
 *
 * Return: Pointer to s
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			if (i == 0)
			{
				s[i] -= 32;
			}
			if (s[i - 1] == 32 || s[i - 1] == 9 || s[i - 1] == 10 ||
				s[i - 1] == 44 || s[i - 1] == 59 || s[i - 1] == 46 ||
				s[i - 1] == 33 || s[i - 1] == 63 || s[i - 1] == 34 ||
				s[i - 1] == 40 || s[i - 1] == 41 || s[i - 1] == 123 ||
				s[i - 1] == 124)
			{
				s[i] -= 32;
			}
		}
		i++;
	}
	return (s);
}
