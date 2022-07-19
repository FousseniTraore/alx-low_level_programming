#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of
 * a listint_t linked list.
 * @head: pointer to the list.
 * Return: the head of the data node
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *first_node = *head;

	if (!first_node)
		return (0);
	data = (*head)->n;
	*head = first_node->next;
	free(first_node);
	return (data);
}
