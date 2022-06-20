#include "main.h"
/**
 * _memset - Function that fill the memory with a constant byte
 * @s: a pointer to a character value
 * @b:The constant byte
 * @n: bytes to fill
 * Return: The memory area filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}

