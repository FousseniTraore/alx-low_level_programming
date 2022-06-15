#include "main.h"
/**
 * _strcpy - copy a string that pointed to
 * @dest: a pointer to a character that will be changed
 * @src: a pointer to a character that will be changed
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
