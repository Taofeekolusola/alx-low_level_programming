#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads the text files printed to STDOUT.
 * @filename: text file to be read
 * @letters: number of letters being read
 * Return: w- exact numbers of bytes read and printed
 *        0 when function fails or when filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fp;
	ssize_t w;
	ssize_t s;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	s = read(fp, buffer, letters);
	w = write(STDOUT_FILENO, buffer, s);

	free(buffer);
	close(fp);
	return (w);
}

