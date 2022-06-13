#include "main.h"
/**
 * _strlen -  function that returns the length of a string.
 * @s: parameter
 * Return: The length of the String.
 */

int _strlen(char *s)
{
	int c;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
