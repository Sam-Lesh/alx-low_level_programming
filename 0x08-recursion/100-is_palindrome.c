#include "main.h"

/**
 * _strlen - length of string
 * @s: string
 * Return: returns length of string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * _compare - checks if two characters are equal
 * @s: string
 * @a: first character
 * @z: last character
 * Return: returns 1 if characters are equal, and 0 if otherwise
 */

int _compare(char *s, int a, int z)
{
	if (*(s + a) == *(s + z))
	{
		if ((a == z) || (a == z + 1))
			return (1);
		return (0 + _compare(s, a + 1, z - 1));
	}
	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: returns 1 if s is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (0);
	return (_compare(s, 0, _strlen(s) - 1));
}
