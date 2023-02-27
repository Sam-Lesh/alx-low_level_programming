#include "main.h"

/**
 * puts2 - prints every other character of string, with the first character
 *
 * @str: string
 *
 * Return: Always 0
 */

void puts2(char *str)
{
	int c = 0;

	while (*(str + c) != '\0')
	{
		_putchar(s[c]);
		c++;
		c++;
	}
	_putchar('\n');
}
