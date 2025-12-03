#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to STDOUT.
 * @filename: Name of the file to read.
 * @letters: Maximum number of letters to read and print.
 *
 * Return: The actual number of bytes read and printed,
 *         or 0 if an error occurs.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}

	rd = read(file, buffer, letters);
	if (rd == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	wr = write(STDOUT_FILENO, buffer, rd);

	free(buffer);
	close(file);

	if (wr == -1 || wr != rd)
		return (0);

	return (wr);
}
