#include <stdio.h>

/**
 * main - prints multiples of 3 and 5
 *
 * Return: returns 0
 *
 */

int main(void)
{
	int i = 0;
	int res = 0;

	while (i < 1024)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			res = (res + i);
		}
		i++;
	}
	printf("%d\n", res);
}
