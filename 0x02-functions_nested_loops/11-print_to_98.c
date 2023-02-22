#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints n to 98
 *
 * @n: input integer
 *
 * Return: Always 0
 *
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
