#include "lists.h"

/**
 * before_main - function that prints
 * before the main function is executed.
 * Return: no return
 */

void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
