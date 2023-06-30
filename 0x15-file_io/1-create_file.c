#include "main.h"

/**
 * create_file - A function that creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int td, m, hen = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (hen = 0; text_content[hen];)
			hen++;
	}

	td = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	m = write(td, text_content, hen);

	if (td == -1 || m == -1)
		return (-1);

	close(td);

	return (1);
}