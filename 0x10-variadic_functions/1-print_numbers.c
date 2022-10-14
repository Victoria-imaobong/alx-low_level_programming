#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *  print_numbers - prints numbers
 *  @separator: string to be printed between numbers
 *  @n: number of integers to be passed to the function
 *  Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, const unsigned int));

		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(valist);
}
