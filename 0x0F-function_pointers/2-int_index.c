#include "function_pointers.h"

/**
 * int_index - functions searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: function pointer
 * Return: Always 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
