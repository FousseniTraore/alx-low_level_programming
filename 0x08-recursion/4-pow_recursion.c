#include "main.h"
/**
 * _pow_recursion - Function that return x raised to the power of y
 * @x: the integer to raised to the power of y
 * @y: the integer that represents the power
 * Return: x raised to ythe power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
