#include "main.h"
/**
 * factorial - function that gives the factorial of a number
 * @n: An integer that will be use to give the factorial
 * Return: strln_recursion
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
