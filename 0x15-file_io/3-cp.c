#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int td);

/**
 * create_buffer - A function that allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
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
 * @fd: The file descriptor to be closed.
 */
void close_file(int td)
{
	int o;

	o = close(td);

	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot closet td %d\n", td);
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
	int b4, afta, t, m;
	char *buffa;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: copy file_from file_to\n");
		exit(97);
	}

	buffa = create_buffer(argv[2]);
	b4 = open(argv[1], O_RDONLY);
	t = read(b4, buffa, 1024);
	afta = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (b4 == -1 || t == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Cannot read from file %s\n", argv[1]);
			free(buffa);
			exit(98);
		}

		m = write(afta, buffa, t);
		if (afta == -1 || m == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Cannot write to %s\n", argv[2]);
			free(buffa);
			exit(99);
		}

		t = read(b4, buffa, 1024);
		afta = open(argv[2], O_WRONLY | O_APPEND);

	} while (t > 0);

	free(buffa);
	close_file(b4);
	close_file(afta);

	return (0);
}
