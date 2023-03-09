#include "main.h"

/**
 * check - checks if n is a square
 * @n: input integer
 * @i: counter
 * Return: returns sqrt or -1
 */

int check(int n, int i)
{
	if ((n / i) == i)
	{
		return (i);
	}
	else
		return (-1);
	return (0 + check(n, (i + 1)));
}

/**
 * _sqrt_recursion - returns sqrt
 * @n: input integer
 * Return: returns sqrt or -1
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (check(n, 1));
}
