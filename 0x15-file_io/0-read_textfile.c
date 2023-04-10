#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- A function that reads text file print to STDOUT.
 * @filename: A text file that is being read
 * @letters: A number of letters to be read
 * Return: w, the actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *men;
	ssize_t time;
	ssize_t m;
	ssize_t f;

	time = open(filename, O_RDONLY);
	if (time == -1)
		return (0);
	time = malloc(sizeof(char) * letters);
	f = read(time, men, letters);
	m = write(STDOUT_FILENO, men, f);

	free(men);
	close(time);
	return (m);
}
