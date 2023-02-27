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
		if (c % 2 == 0)
		{
			_putchsr(str[c]);
		}
		c++;
	}
	_putchar('\n');
}
