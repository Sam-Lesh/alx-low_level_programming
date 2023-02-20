#include <stdio.h>

/**
 * main - Prints numbers between 00 to 89.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	int j;

	while (i < 58)
	{
		for (j = i + 1; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}

		i++;

	}

	putchar('\n');
	return (0);
}
