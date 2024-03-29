#include "function_pointers.h"
/**
 * print_name - a function that prints a name
 * @name: name
 * @f: pointer to function
 * Return: name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
