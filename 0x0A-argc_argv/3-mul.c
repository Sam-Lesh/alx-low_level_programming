#include <stdio.h>
#include <stdlib.h>

/**
 * main -multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: returns mul
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc > 2)
	{
		mul = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
