#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: no return
 */

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
