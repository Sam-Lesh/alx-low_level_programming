#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: given unsigned long input
 * @index: given index
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int m;

	if (n == 0 && index < 64)
		return (0);

	for (m = 0; m < 64; n >>= 1, m++)
	{
		if (index == m)
			return (n & 1);
	}
	return (-1);
}
