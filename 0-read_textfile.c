#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- A function that reads the text file print to STDOUT.
 * @filename: The text file being read
 * @letters: The number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffa;
	ssize_t td;
	ssize_t m;
	ssize_t f;

	td = open(filename, O_RDONLY);
	if (td == -1)
		return (0);
	buffa = malloc(sizeof(char) * letters);
	f = read(td, buffa, letters);
	m = write(STDOUT_FILENO, buffa, f);

	free(buffa);
	close(td);
	return (m);
}
