#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 * Return: the pointer to dest
 */

char *cap_string(char *s)
{
	int x = 0, a;
	int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + x) >= 97 && *(s + x) <= 122)
		*(s + x) = *(s + x) - 32;
	x++;
	while (*(s + x) != '\0')
	{
		for (a = 0; a < 13; a++)
		{
			if (*(s + x) == sep[a])
			{
				if ((*(s + (x + 1)) >= 97) && (*(s + (x + 1)) <= 122))
					*(s + (x + 1)) = *(s + (x + 1)) - 32;
				break;
			}
		}
		x++;
	}
	return (s);
}
