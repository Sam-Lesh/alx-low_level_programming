#include <stdio.h>

/**
 * main - prints first fift fibonacci
 *
 * Return: returns 0
 *
 */

int main(void)
{
	long int i = 1;
	long int j = 2;
	long int res = 0;
	int c = 0;

	printf("%ld, %ld", i, j);

	while (c < 48)
	{
		res = (i + j);
		printf(", %ld", res);
		i = j;
		j = res;
		c++;
	}
	putchar('\n');
	return (0);
}
