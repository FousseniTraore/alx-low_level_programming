#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char cha;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}
	for (cha = 'a'; cha <= 'f'; cha++)
	{
		putchar(cha);
	}
		putchar('\n');
	return (0);
}
