#include "main.h"

/**
 * print_times_table - prints n times table
 *
 * @n: input integer
 *
 * Return: no return
 *
 */

void print_times_table(int n)
{
	int a, b, t;

	if (n > -1 && n < 16)
	{

	for (a = 0; a < n + 1; a++)
	{
		_putchar(48);

		for (b = 1; b < n + 1; b++)
		{
			t = a * b;
			_putchar(44);
			_putchar(32);
			if (t < 10)
			{
				_putchar(32);
				_putchar(32);
				_putchar(t + 48);
			}
			else if (t < 100)
			{
				_putchar(32);
				_putchar((t / 10) + 48);
				_putchar((t % 10) + 48);
			}
			else
			{
				_putchar((t / 100) + 48);
				_putchar(((t / 10) % 10) + 48);
				_putchar(((t % 10) % 10) + 48);
			}
		}
		_putchar('\n');
	}
	}
}
