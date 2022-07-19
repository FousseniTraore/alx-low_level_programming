#include "linked_lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: a pointer to the list
 * Return: number of node
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	size_t cont = 0;

	while (node)
	{
		printf("%i\n", node->n);
		cont++;
		node = node->next;
	}
	return (cont);
}
