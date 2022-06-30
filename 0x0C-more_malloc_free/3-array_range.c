#include <stdlib.h>
#include "main.h"
#include "stdio.h"
/**
 * array_range - a function that creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 * Return: The pointer to the new array
 */
int *array_range(int min, int max)
{
	int range;
	int i;
	int *p;

	range = 0;
	if (min > max)
		return (NULL);
	range = ((max + 1) - min);
	p = malloc(range * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < range; i++)
	{
		*(p + i) = min + i;
	}
	return (p);
}
