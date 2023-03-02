#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;
	int e;

	while (*(dest + a) != '\0')
		a++;
	while (*(src + b) != '\0')
		b++;

	for (e = 0; e < b; e++)
	{
		*(dest + a + e) = *(src + e);
	}
	return (dest);
}
