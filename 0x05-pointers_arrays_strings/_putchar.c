#include <unistd.h>
/**
 * _putchar - A function that prints a string to the stdout
 * @c: The variable to print
 * Return: 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
