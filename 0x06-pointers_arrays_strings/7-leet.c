#include "main.h"

/**
 * leet - encodes a string into 1137
 * @s: input string
 * Return: the pointer to dest
 */

char *leet(char *s)
{
	int x = 0, a;
	int low_let[] = {97, 101, 111, 116, 108};
	int upp_let[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + x) != '\0')
	{
		for (a = 0; a < 5; a++)
		{
			if (*(s + x) == low_let[a] || *(s + x) == upp_let[a])
			{
				*(s + x) = numbers[a];
				break;
			}
		}
		x++;
	}
	return (s);
}
