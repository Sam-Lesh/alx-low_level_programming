#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: input
 * Return: no return
 */

void print_chessboard(char (*a)[8])
{
	int i, a = 0;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0)
		{
			m = i;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - m]);
	}
	_putchar('\n');
}
