#include <stdio.h>

/**
 * main - prints name of the file it was compiled from, followed by a new line
 *
 * Return: file name
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
