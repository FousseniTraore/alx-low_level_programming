#include "main.h"
#include "stdio.h"
/**
 * main -  a program that prints its name, followed by a new line.
 * @argv: argv
 * @argc: Array name
 * Return: 0
 */
int main(int argc, char *argv[])
{

	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++)
			;
		printf("%d\n", i - 1);
	}
	return (0);
}
