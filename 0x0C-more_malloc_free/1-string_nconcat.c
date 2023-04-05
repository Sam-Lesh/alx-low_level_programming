#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes taken from s2
 * Return: returns pointer shall point to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	cat = malloc((sizeof(s1) + n) * sizeof(char));
	if (cat == NULL)
		return (NULL);
	i = sizeof(s2);
	if (n >= (i - 1))
		n = (i - 1);
	
	for (i = 0; s1[i] != '\0'; i++)
		cat[i] = s1[i];
	for (j = 0; j < n; i++, j++)
		cat[i] = s2[j];
	cat[i] = '\0';
	return (cat);
}
