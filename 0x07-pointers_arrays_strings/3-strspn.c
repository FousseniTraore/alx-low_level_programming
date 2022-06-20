#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: a string
 * @accept: the accepted string
 * Return: member of byte
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;
		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}
			b++;
		}
		a++;
	}
	return (t);
}
