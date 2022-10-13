#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator -  executes a function given as
 * a parameter on each element of an array.
 * @array: array
 * @size: size of the array
 * @action: a pointer to the function needed to use
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
