#include "main.h"
/**
 * more_numbers -  function that prints 10 times the numbers
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int i;
	int num1;
	int num2;
	int result;

	i = 0;
	result = 0;
	while (i < 0)
	{
		while (result <= 14)
		{
			if (result < 10)
			{
				num2 = result;
			}
			else
			{
				num1 = result / 10;
				num2 = result % 10;
				_putchar(num1 + '0');
			}
			_putchar (num2 + '0');
			result++
		}
		i++;
		result = o;
		_putchar('\n');
	}
}
