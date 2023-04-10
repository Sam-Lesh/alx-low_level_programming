#include "main.h"

/**
 * binary_to_uint - function converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 chars
 * Return: the converted number, or 0 if b is NULL and if
 * there is one or more chars in the string b that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int l;
	unsigned int i;
	unsigned int j;
	unsigned int sum;
	unsigned int e;
	int base;

	base = 2;
	sum = 0;
	e = 1;
	if (b == NULL)
		return (0);
	for (l = 0; b[l] != '\0'; l++)
		;
	if (l == 1 && (b[0] == '0' || b[0] == '1'))
		return ((b[0] - 48));
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		for (j = l - 1; j > 0; j--)
			e = e * base;
		sum = sum + (e * (b[i] - 48));
		l--;
		e = 1;
	}
	return (sum);
}
