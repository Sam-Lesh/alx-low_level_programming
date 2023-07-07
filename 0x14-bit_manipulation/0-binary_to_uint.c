#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of binary numbers
 * Return: Returns unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int pow = 1;
	int length, i;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		decimal += (b[i] - '0') * pow;
		pow *= 2;
	}
	return (decimal);
}
