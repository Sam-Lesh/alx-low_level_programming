#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: the pointer to dest
 */

char *rot13(char *s)
{
	int x = 0, a;
	char alp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + x) != '\0')
	{
		for (a = 0; a < 52; a++)
		{
			if (*(s + x) == alp[a])
			{
				*(s + x) = rot13[a];
				break;
			}
		}
		x++;
	}
	return (s);
}
