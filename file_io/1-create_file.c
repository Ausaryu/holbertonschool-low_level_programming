#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - Creates a file and writes a string to it.
 * @filename: Name of the file to create.
 * @text_content: NULL-terminated string to write, or NULL for empty file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file, len = 0, wr;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		wr = write(file, text_content, len);
		if (wr == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
