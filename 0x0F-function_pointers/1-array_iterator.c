#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function given as
 * a parameter on each element of an array.
 * @array: array of input of integer
 * @size: the size of tghe array
 * @action: the pointer to the function
 * return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t m;

	if (array == NULL || action == NULL)
		return;
	for (}
