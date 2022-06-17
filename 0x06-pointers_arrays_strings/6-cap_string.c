#include "main.h"
/**
 * cap_string - a function that capitalizes all words
 * @n: A pointer
 * Return: a string capitalized
 */
char *cap_string(char *n)
{
	int a;

	a = 0;
	if (n[0]; >= 'a' && n[0] <= 'z')
	{
		n[0] = n[0] - 32;
	}
	for (a = 0; n[a] != '\0'; a++)
	{
		switch (n[a])
		{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case ' ':
			case '\n':
			case '\t':
				if (n[i + 1] > 96 && n[i + 1] < 123)
				{
					n[i + 1] = n[i + 1] - 32;
				}
		}
	}
	return (n);
}

