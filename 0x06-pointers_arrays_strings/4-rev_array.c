#include "main.h"
/**
 * reverse_array - A function that reverses the content of
 * an array of integers.
 * @a: A pointer to an integer
 * @n: An integer
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
