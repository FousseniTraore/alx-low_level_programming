#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: the head of the list
 * @str: a string to set in the new node
 * Return: address of the new element or NULL for failure
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
	new->next = *head;
	*head = new;
	return (*head);
}

