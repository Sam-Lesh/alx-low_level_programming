#include "main.h"

/**
 * print_square - prints a square
 *
 * @size: size of square
 *
 * Return: no return
 *
 */

void print_square(int size)
{
	int i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
