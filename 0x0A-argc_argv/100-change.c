#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int change(int cents);
/**
 * main - a program that prints the minimum number of coins
 * to make change for an amount of money
 * @argc: argument
 * @argv: array pointing to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else if (argc < 0)
	{
		return (0);
	}
	printf("%d\n");
       	change(atoi(argv[1]));
	return (0);
}

/**
 * change - get change
 * @cents: the amount of cents you need to give back
 * Return: change
 */
int change(int cents)
{
	int q = 25, r = 10, s = 5, t = 2, u = 1;
	int coins;

	while (cents > 0)
	{
		while (cents >= q)
		{
			cents -= q;
			coins++;
		}
		while (cents >= r)
		{
			cents -= r;
			coins++;
		}
		while (cents >= s)
		{
			cents -= s;
			coins++;
		}
		while (cents >= t)
		{
			cents -= t;
			coins++;
		}
		while (cents >= u)
		{
			cents -= u;
			coins++;
		}
	}
	return (coins);
}
