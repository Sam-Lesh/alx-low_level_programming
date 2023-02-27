#include "main.h"

/**
 * puts_half - prints half of a string, then a new line
 *
 * @str: string
 *
 * Return: Always 0
 */

void puts_half(char *str)
{
	int c = 0;

	while (*(str + c) != '\0')
		c++;
	if (c % 2 == 0)
	{
		for (a = (c / 2) + 1; a < (c + 1); a++)
		{
			_putchar(s[a]);
		}
	}
	if (c % 2 == 1)
	{
		for (a = (c - 1) / 2; a < (c + 1); a++)
		{
			_putchar(s[a]);
		}
	}
	_putchar('\n');
}
