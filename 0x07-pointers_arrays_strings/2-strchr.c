#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: a string
 * @c: a character to find
 * Return: s
 */
char *_strchr(char *s, char c);
{
	int a;
	int b;

	a = 0;
	while (s[a])
	{
		a++;
	}
	for (b = 0; b <= a; b++)
	{
		if (c == s[a])
		{
			s += b;
			return (s);
		}
	}
	return ('\0');
}
