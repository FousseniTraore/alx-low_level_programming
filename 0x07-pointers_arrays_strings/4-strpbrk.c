#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: string
 * @accept: accepted characters
 * Return: s
 */
char *_strpbrk(char *s, char *accept);
{
	int a;

	while (*s != '\0')
	{
		a = 0;
		while (accept[a] != '\0')
		{
			if (*s == accept[a])
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (0);
}
