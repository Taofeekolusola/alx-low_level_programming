#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *make_buff(char *file);
void end_file(int fp);

/**
 * make_buff - makes 1024 bytes for a buffer.
 * @file: name of file buffer is storing chars for.
 *
 * Return: pointer to the newly allocated buffer.
 */
char *make_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * end_file - Closes file descriptors.
 * @fp: file descriptor to be closed.
 */
void end_file(int fp)
{
	int a;

	a = close(fp);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments provided to the program.
 * @argv: Array of pointers to the arguments.
 *
 * Return: 0 if successful.
 *
 * Description: If incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int fr, t, a, w;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = make_buff(argv[2]);
	fr = open(argv[1], O_RDONLY);
	a = read(fr, buff, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fr == -1 || a == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		w = write(t, buff, a);
		if (t == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		a = read(fr, buff, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);

	} while (a > 0);

	free(buff);
	end_file(fr);
	end_file(t);

	return (0);
}
