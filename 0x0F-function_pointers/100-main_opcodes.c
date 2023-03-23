#include <stdio.h>
#include <stdlib.h>

/**
 * main - A function that prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, m;
	char *array;


	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}


	bytes = atoi(argv[1]);


	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}


	array = (char *)main;


	for (m = 0; m < bytes; m++)
	{
		if (m == bytes - 1)
		{
			printf("%02hhx\n", array[m]);
			break;
		}
		printf("%02hhx ", array[m]);
	}
	return (0);
}
