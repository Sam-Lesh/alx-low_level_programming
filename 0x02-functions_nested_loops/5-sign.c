#include "main.h"

/**
 * print_sign - This program prints the sign of a number
 *
 * @n: This is a real number
 *
 * Return: returns 1 for numbers > zero, 0 = zero, and -1 for others
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('43');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('45')
		return (-1);
	}
	else
	{
		_putchar('48');
		return (0);
	}
	_putchar('\n');
}

