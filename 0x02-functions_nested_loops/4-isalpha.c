#include "main.h"

/**
 * _isalpha - This program checks for both upper and lower case alphabets
 *
 * @c: The character in ASCII code
 *
 * Return: returns 1 for alphabets and 0 for others
 *
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
