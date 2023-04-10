#include "main.h"

/**
 * set_bit - function sets the value of a bit to 1 at a given index
 * @n: input number
 * @index: index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);

	a = 1 << index;
	*n = (*n | a);

	return (1);
}
