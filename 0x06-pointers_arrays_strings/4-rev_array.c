#include "main.h"

/**
 * reverse_array - reverses the array elements
 * @a: array
 * @n: number of array elements
 * Return: no return
 */

void reverse_array(int *a, int n)
{
	int b, c, d;

	for (b = 0; c < n; b++)
	{
		for (c = b + 1; c > 0; c--)
		{
			d = *(a + c);
			*(a + c) = *(a + (c - 1));
			*(a + (c - 1)) = d;
		}
	}
}
