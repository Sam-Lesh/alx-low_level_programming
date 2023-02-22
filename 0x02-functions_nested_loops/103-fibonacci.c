#include <stdio.h>

/**
 * main - prints sum of even fibonacci numbers til 4000000
 *
 * Return: returns 0
 *
 */

int main(void)
{
	long int i, j, k, l;

	i = 1;
	j = 2;
	k = 0;
	l = 2;

	while (k <= 4000000)
	{
		k = i + j;
		i = j;
		j = k;
		if ((k % 2) == 0)
		{
			l = l + k;
		}
	}
	printf("%ld\n", l);
	return (0);
}
