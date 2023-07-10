#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: name of file
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int filedes, nletters, wrt;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters] != '\0'; nletters++)
		;

	filedes = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (filedes == -1)
		return (-1);

	wrt = write(filedes, text_content, nletters);
	if (wrt == -1)
		return (-1);

	close(filedes);
	return (1);
}
