#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - A function that allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *bufa;

	bufa = malloc(sizeof(char) * 1024);

	if (bufa == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (bufa);
}

/**
 * close_file - A function that closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int s;

	s = close(fd);

	if (s == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
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
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int come, then, t, m;
	char *bufa;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	bufa = create_buffer(argv[2]);
	come = open(argv[1], O_RDONLY);
	t = read(come, bufa, 1024);
	then = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (come == -1 || t == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(bufa);
			exit(98);
		}

		m = write(then, bufa, t);
		if (then == -1 || m == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(bufa);
			exit(99);
		}

		t = read(come, bufa, 1024);
		then = open(argv[2], O_WRONLY | O_APPEND);

	} while (t > 0);

	free(bufa);
	close_file(come);
	close_file(then);

	return (0);
}
