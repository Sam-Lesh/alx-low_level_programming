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
	int d = 0;
	int c;

	while (*(dest + a) != '\0')
		a++;
	while (*(src + b) != '\0')
		b++;
	for (c = a; c < (a + b); c++)
	{
		*(dest + c) = *(src + d);
		d++;
	}
	return (*dest);
}
