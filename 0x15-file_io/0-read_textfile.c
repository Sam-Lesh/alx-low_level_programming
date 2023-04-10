#include "main.h"

/**
 * read_textfile - function reads text file and prints to POSIX std output
 * @filename: the name of the file to be created
 * @letters: the number of letters it should read and print
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int i;
	int read_letters;
	char *buff;

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}

	read_letters = read(fd, buff, letters);
	if (read_letters == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}

	for (i = 0; i < read_letters; i++)
	{
		if (write(STDOUT_FILENO, &buff[i], 1) == -1)
		{
			close(fd);
			free(buff);
			return (0);
		}

	}
	close(fd);
	free(buff);
	return (read_letters);
}
