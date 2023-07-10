#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: name of file
 * @letters: number of letters to be printed
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedes;
	ssize_t nread, nwrite;
	char *str;

	if (!filename)
		return (0);

	filedes = open(filename, O_RDONLY);
	if (filedes == -1)
		return (0);
	str = malloc(sizeof(char) * letters);
	if (!str)
		return (0);

	nread = read(filedes, str, letters);
	nwrite = write(STDOUT_FILENO, str, nread);

	close(filedes);
	free(str);

	return (nwrite);
}
