#include "pointer_to_function.h"
/**
 * print_name - a function that prints a name
 * @name: name
 * @m: pointer to function
 * Return: name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
