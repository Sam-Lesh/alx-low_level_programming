#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: character in string
 *
 * Return: Always 0
 */

void rev_string(char *s)
{
	int c = 0;
	int a;
	int b;
	int z[b];

	while (*(s + c) != '\0')
		c++;

	for (a = (c - 1); a >= 0; a--)
	{
		*(z + b) = (s[a]);
		b++;
	}
	return (z);
}
