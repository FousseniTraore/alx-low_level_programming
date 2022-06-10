#include "main.h"
#include <stdio.h>
/**
 * _isdigit - Check if c is a digit
 * @c: Character/digit
 * return: 1 when c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
