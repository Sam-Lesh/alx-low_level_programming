#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of the triangle
 *
 * Return: no return
 *
 */

void print_triangle(int size)
{
	int i, m, l;
	int j = size;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (l = 1; l < j; l++)
			{
				_putchar(32);
			}
			for (m = j; m < (size + 1); m++)
			{
				_putchar(35);
			}
			_putchar('\n');
			j--;
		}
	}
	else
	{
		_putchar('\n')
	}
}

