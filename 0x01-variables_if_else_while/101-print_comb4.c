#include <stdio.h>

/**
 * main - Prints numbers between 012 to 789.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	int j, k;

	while (i < 58)
	{
		for (j = i + 1; j < 57; j++)
		{
			for (k = i + 2; k < 58; k++)
			{
				putchar (i);
				putchar (j);
				putchar (k);

				if (i < 55)
				{
					putchar (',');
					putchar (' ');
				}
			}
			j++
		}
		i++
	}
	putchar ('\n');
	return (0);
}
