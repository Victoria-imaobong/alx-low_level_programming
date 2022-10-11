#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers.
 * @min: minimum input
 * @max: max input
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, len;

	if (min > max) 
		return (NULL);

	for (len = 0; len < (max - min); len++)
		return (0);

	arr = malloc(sizeof(int) * (len + 1));
	if (arr == NULL)
		return (NULL);

	for (len = 0; i <= len; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
