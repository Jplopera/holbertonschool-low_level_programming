#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	char *h;

	if (ht == NULL)
		return;

	printf("{");
	h = "";

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			printf("%s'%s': '%s'", h, tmp->key, tmp->value);
			h = ", ";
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
