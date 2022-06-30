#include <stdlib.h>
#include "main.h"
/**
 * _strdup - a function that returns a pointer to
 * a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: duplicated string
 * Return: pointer to a string
 */
char *_strdup(char *str)
{
	char *s;
	int a, b;

	if (str == NULL)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
		;
	s = malloc(a * sizeof(*s) + 1);
	if (s == NULL)
		return (NULL);
	for (b = 0; b < i; b++)
		s[b] = str[b];
	s[b] = '\0';
	return (s);
}
