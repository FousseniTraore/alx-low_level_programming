#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n)
 * of the listint_t list.
 * @head: the pointer to the first element of the list
 * Return: the sum of all the data in the list or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
