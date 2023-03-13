#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function with nested loop to make grid
 * @width: width input
 * @height: height input
 *
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **men;
	int x, w;


	if (width <= 0 || height <= 0)
		return (NULL);


	mee = malloc(sizeof(int *) * height);

	if (men == NULL)
		return (NULL);


	for (x = 0; x < height; x++)
	{
		men[x] = malloc(sizeof(int) * width);


		if (men[x] == NULL)
		{
			for (; x >= 0; x--)
				free(men[x]);


			free(men);
			return (NULL);
		}

	}

	for (x = 0; x < height; x++)
	{
		for (w = 0; w < width; w++)
			men[x][w] = 0;
	}

	return (men);
}
