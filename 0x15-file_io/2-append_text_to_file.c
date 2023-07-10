#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: name of file
 * @text_content: the NULL terminated string to add at the end of the file.
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filedes, nletters, wrt;

	if (!filename)
		return (-1);
	filedes = open(filename, O_WRONLY | O_APPEND);
	if (filedes == -1)
		return (-1);
	if (text_content)
	{
		for (nletters = 0; text_content[nletters] != '\0'; nletters++)
			;
		wrt = write(filedes, text_content, nletters);
		if (wrt == -1)
			return (-1);
	}
	close(filedes);
	return (1);
}
