#include "main.h"

/**
 * _puts - prints a string followed by a new line, to stdout
 *
 * @str: string
 *
 * Return: Always 0
 */

void _puts(char *str)
{
	int c = 0;

	while (*(str + c) != '\0')
	{
		_putchar(*(str + c));
		c++;
	}
	_putchar('\n');
	return (0);
}
