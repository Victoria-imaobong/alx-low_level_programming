#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - a function that prints a name
 * @name: name
 * @f: pointer to print upper or non upper function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
