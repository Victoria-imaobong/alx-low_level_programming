#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to a 2
 * dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	iarray = malloc(sizeof(int) * height);

	if (iarray == NULL)
	{
		free(iarray);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		iarray[i] = malloc(sizeof(int) * width);
		if (iarray == NULL)
		{
			free(iarray);
			return (NULL);
		}

		for (n = 0; n < width; n++)
		{
			iarray[i][n] = 0;
		}
	}
	return (iarray);
}
