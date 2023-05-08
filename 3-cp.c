#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffa(char *file);
void close_file(int td);

/**
 * create_buffa - A function that allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffa(char *file)
{
	char *buffa;

	buffa = malloc(sizeof(char) * 1024);

	if (buffa == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Cannot write to %s\n", file);
		exit(99);
	}

	return (buffa);
}

/**
 * close_file - A function that closes file descriptors.
 * @td: The file descriptor to be closed.
 */
void close_file(int td)
{
	int o;

	o = close(td);

	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot close td %d\n", td);
		exit(100);
	}
}

/**
 * main - A function that copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int before, after, t, m;
	char *buffa;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: copy file_from file_to\n");
		exit(97);
	}

	buffa = create_buffa(argv[2]);
	before = open(argv[1], O_RDONLY);
	t = read(before, buffa, 1024);
	after = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (before == -1 || t == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Cannot read from file %s\n", argv[1]);
			free(buffa);
			exit(98);
		}

		m = write(after, buffa, t);
		if (after == -1 || m == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Cannot write to %s\n", argv[2]);
			free(buffa);
			exit(99);
		}

		t = read(before, buffa, 1024);
		after = open(argv[2], O_WRONLY | O_APPEND);

	} while (t > 0);

	free(buffa);
	close_file(before);
	close_file(after);

	return (0);
}
