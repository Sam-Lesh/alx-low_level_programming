#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: given number
 * Return: return -1 for n < 0, 1 for 0 and 1, and factorial of given number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	if (n == 1)
	{
		return (1);
	}
	else
		return (n + factorial(n - 1));
}
