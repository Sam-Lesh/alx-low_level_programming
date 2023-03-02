#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src
 *
 * Return: the pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
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
