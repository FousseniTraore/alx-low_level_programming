#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13.
 * @s: a pointer to a string
 * Return: s
 */
char *rot13(char *s)
{
	int a;
	int b;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; input[b] != '\0'; b++)
		{
			if (s[a] == input[b])
			{
				s[a] = output[b];
				break;
			}
		}
	}
	return (s);
}
