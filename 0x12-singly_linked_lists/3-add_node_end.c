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
	list_t *new; *aux = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen_recursion(new->str);
	new->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
		aux->next = new;
		else
			*head = new;
		return (new);
	}
}
/**
 * _strlen_recursion -function that returns the length of a string.
 * @s: string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
