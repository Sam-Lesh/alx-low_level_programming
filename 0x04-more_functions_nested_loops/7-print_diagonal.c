#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: number of times
 *
 * Return: no return
 *
 */

void print_diagonal(int n)
{
	int i, a;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (a = 0; a < i; a++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
