#include "main.h"
/**
 * _strcmp - A function that compare two strings
 * @s1: pointer of string 1
 * @s2: pointer of string 2
 * Return: s1[i] - s2[i] which is the dif bet both
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}
