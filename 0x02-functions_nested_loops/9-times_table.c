#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * Return: no return
 *
 */

void times_table(void)
{
	int a, b, t;

	for (a = 0; a < 10; a++)
	{
		_putchar(48);
		for (b = 1; b < 10; b++)
		{
			t = a * b;
			_putchar(44);
			_putchar(32);
			if (t < 10)
			{
				_putchar(32);
				_putchar(t + 48);
			}
			else
			{
				_putchar((t / 10) + 48);
				_putchar((t % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
