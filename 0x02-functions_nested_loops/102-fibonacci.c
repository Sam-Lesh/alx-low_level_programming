#include <stdio.h>

/**
 * main - prints first fift fibonacci
 *
 * Return: returns 0
 *
 */

int main(void)
{
	int i = 1;
	int j = 2;
	int res = 0;
	int c = 0;

	printf("%d, %d", i, j);

	while (c < 48)
	{
		res = (i + j);
		printf(", %d", res);
		i = j;
		j = res;
		c++;
	}
	putchar('\n');
	return (0);
}
