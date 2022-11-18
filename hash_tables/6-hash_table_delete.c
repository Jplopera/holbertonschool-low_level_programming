#include "hash_tables.h"

/**
 * hash_table_delete -  function that deletes a hash table.
 * @ht: is the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			tmp = ht->array[i];
			free(tmp->key);
			free(tmp->value);
			ht->array[i] = ht->array[i]->next;
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
