#include "main"

/**
 * _islower - This program checks for lowercase
 *
 * @c: a character in ASCII code
 *
 * Return: 1 for lowercase, 0 for others
 *
 */

int _islower(int c)
{
	int c;

	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
