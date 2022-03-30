#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: first node of the list
 * @str: string
 * Return: *head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_n;

	new_n = malloc(sizeof(list_t));

	if (new_n == NULL)
	{
		return (NULL);
	}

	new_n->len = strlen(str);
	new_n->str = strdup(str);
	new_n->next = *head;
	new_n = *head;

	return (*head);
}
