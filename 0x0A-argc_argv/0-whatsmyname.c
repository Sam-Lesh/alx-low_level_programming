#include <stdio.h>

/**
 * main - prints name of program
 * @argc: argument count
 * @argv: argument vector
 * Return: no return
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
