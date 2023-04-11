#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- A function that reads text file print to STDOUT.
 * @filename: A text file that is being read
 * @letters: A number of letters to be read
 *
 * Return: w, the actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t p, t, m;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	p = open(filename, O_RDONLY);
	t = read(p, buf, letters);
	m = write(STDOUT_FILENO, buf, t);

	if (p == -1 || t == -1 || m == -1 || m != t)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(p);

	return (m);
}
