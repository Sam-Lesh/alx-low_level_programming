#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * @n: pointer to an unsigned long int
 * @index: bit to be set to 1
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index >= 64)
		return (-1);

	i = (1 << index);
	*n = (*n | i);
	return (1);
}
