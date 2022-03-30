#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: node to be printed
 * Return: noud counter
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		else
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
	}
	return (i);
}
