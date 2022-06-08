#include "main.h"
/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int alph;
	int c;

	c = 0;
	while (c < 10)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		c++;
		_putchar('\n');
	}
}
