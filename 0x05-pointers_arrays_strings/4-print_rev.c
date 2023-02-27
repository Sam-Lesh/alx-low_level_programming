#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: character in string
 *
 * Return: Always 0
 */

void print_rev(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
		c++;

	for (c; c >= 0; c--)
	{
		_putchar(*(s + C));
	}
	_putchar('\n');
}
