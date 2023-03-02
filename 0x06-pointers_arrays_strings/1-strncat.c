#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: string
 * @src: string
 * @n: integer
 *
 * Return: Always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;
	int e = 0;

	while (*(dest + a) != '\0')
		a++;
	for (e = 0; e < n; e++)
	{
		*(dest + a + e) = *(src + e);
		if (*(src + e) == '\0')
			break;
	}
	return (dest);
}
