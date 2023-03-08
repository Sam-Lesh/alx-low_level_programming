#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the value of y
 * @x: first integer
 * @y: second integer
 * Return: returns -1 if y < 0, and 1 if y = 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, (y - 1)));
}
