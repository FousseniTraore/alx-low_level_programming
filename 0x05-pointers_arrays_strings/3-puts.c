#include "main.h"
/**
 * _puts - print a character
 * @str: a pointer to a string variable
 * Return: Nothing
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

