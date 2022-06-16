#include "main.h"
/**
 * _strncpy - a function that copies a string.
 * @dest: A pointer to a character
 * @src: A pointer to a character
 * @n: an integer
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != ; '\0'; a++)
	{
		dest[a] = src[a];
	}
	for (; a < n; a++)
		dest[a] = '\0';
	return (dest);
}
