#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: node to be printed
 * Return: noud counter
 */
size_t print_list(const list_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		else
		{
			printf("[0] (nill)\n");
			h = h->next;
		}
	}
	return (count);
}
