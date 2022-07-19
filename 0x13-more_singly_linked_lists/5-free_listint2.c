#include "lists.h"

/**
 * free_listint2 -  a function that frees a listint_t list.
 * @head: pointer to the list.
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *actual_node;
	listint_t *next_node;

	if (!head)
		return;
	actual_node = *head;
	next_node = (*head)->next;
	while (next_node)
	{
		free(actual_node);
		actual_node = next_node;
		next_node = next_node->next;
	}
	free(actual_node);
	*head = NULL;
}
