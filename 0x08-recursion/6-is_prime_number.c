#include "main.h"

/**
 * check - checks if input integer is a prime number
 * @n: input integer
 * @i: counter
 * Return: returns 1 if prime and 0 if not
 */

int check(int n, int i)
{
	if (n > 1)
	{
		if (((n % i) == 0) && (n > i))
		{
			return (1);
		}
		else if (((n % i) == 0) && (n == i))
		{
			return (0);
		}
		else
		{
			return (check(n, (i + 1)));
	}
}

/**
 * is_prime_number - returns 1 if n is a prime number, otherwise returns 0
 * @n: input integer
 * Return: returns 0 or 1
 */

int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	else
		return (check(n, 2));
	}
