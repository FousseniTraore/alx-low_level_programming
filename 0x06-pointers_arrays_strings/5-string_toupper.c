#include "main.h"
/**
 * string_toupper - function that changes lowercase to uppercase.
 *@n: pointer to a character
 * Return: n
 */
char *string_toupper(char *n);
{
	int a;

	a = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
