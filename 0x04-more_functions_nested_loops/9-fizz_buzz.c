#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (!(i % 3 == 0 || i % 5 == 0))
			printf("%d", 1);
		else
		{
			if ((i % 3 == 0) && (i % 5 != 0))
				printf("Fizz");
			else if ((i % 3 != 0) && (i % 5 == 0))
				printf("Buzz");
			else
				printf("FizzBuzz");
		}
		if (i < 100)
			printf(" ');
		else
			printf("\n");
	}
	return (0);
}
