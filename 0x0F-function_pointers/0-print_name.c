#include "pointer_to_function.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - a function that prints a name
 * @name: name
 * @m: pointer to function
 * Return: name
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
		f(name);
}
