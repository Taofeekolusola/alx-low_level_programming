#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: pointer to the name of file to be created.
 * @text_content: pointer to string to be written to file.
 *
 * Return: If the function fails -- -1.
 *         else -- 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fp, w, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fp, text_content, leng);

	if (fp == -1 || w == -1)
		return (-1);

	close(fp);

	return (1);
}

