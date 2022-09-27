#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagon
 * als of a square matrix of integers
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int i, n, total1 = 0, total2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		total1 = total1 + a[i];

	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		total2 = total2 + a[n];
	printf("%d, %d\n", total1, total2);
}
