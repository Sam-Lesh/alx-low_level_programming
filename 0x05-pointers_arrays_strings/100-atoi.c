#include "main.h"

/**
 * _atoi - converts a string to an integer
 *
 * @s: string
 *
 * Return: Always 0
 */

int _atoi(char *s)
{
	int c = 0;
	int a = 0;
	int h = 0;
	int b;

	while (*(s + a) != '\0')
	{
		c++;
		a++;
	}
	for (b = 0; b < c; b++)
	{
		if (*(s + b) == 45)
		{
			h++;
		}
	}
	if (h % 2 != 0)
	{
		_putchar(45);
	}
	for (b = 0; b < c; b++)
	{
		if (*(s + b) > 47 && *(s + b) < 58)
		{
			_putchar(*(s + b));
		}
	}
	_putchar('\n');
	_putchar(48);
}
