#include "main.h"
/**
 * puts_half - a function that prints half of a string,
 * followed by a new line
 *
 * @str: a pointer to a character
 * Return: void that means nothing (Success)
 */
void puts_half(char *str)
{
	int i, ls;

	i = 0;
	while (str[i] != '\0')
	{
		i++
	}
	ls = (i + 1) / 2;
	for (i = ls; str[i]; i++)
	{
		_putchar (str[i]);
	}
	_putchar('\n');
}
