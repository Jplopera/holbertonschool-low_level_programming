#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: first node
 * @str: string
 * Return: *head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_n;
	list_t *final_n;

	new_n = malloc(sizeof(list_t));
	if (new_n == NULL)
		return (NULL);

	new_n->len = strlen(str);
	new_n->str = strdup(str);
	new_n->next = NULL;

	if (*head == NULL)
		*head = new_n;
	else
	{
		final_n = *head;
		while (final_n->next != NULL)
			final_n = final_n->next;
		final_n->next = new_n;
	}
	return (*head);
}
