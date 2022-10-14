#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: variadic inputs
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, const unsigned int);
	}
	printf("\n");

	va_end(valist);

	return (sum);
}
