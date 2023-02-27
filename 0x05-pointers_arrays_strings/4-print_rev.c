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
	int a;

	while (*(s + c) != '\0')
		c++;

	for (a = c; a >= 0; a--)
	{
		_putchar(*(s + a));
	}
	_putchar('\n');
}
