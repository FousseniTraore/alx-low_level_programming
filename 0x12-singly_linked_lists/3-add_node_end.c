#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning
 * of a list_t list
 * @head: head of the linked list.
 * @str: string to store in the list
 * Return: address of the head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (nchar = 0; str[nchar]; nchar++)
		;
	new->len = nchar;
	new->next = NULL;
	temp = *head;
	if (temp  NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp = temp->next;
	}
	return (*head);
}