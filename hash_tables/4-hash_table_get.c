#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 * Return: value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = 0;
	char *value;

	if (!ht)
		return (NULL);
	if (!key)
		return (NULL);
	i = key_index((unsigned char *)key, ht->size);
	if (ht->array[i] == NULL)
		return (NULL);
	while (ht->array[i])
	{
		if (strcmp(ht->array[i]->key, key) == 0)
			value = ht->array[i]->value;
		ht->array[i] = ht->array[i]->next;
	}
	return (value);
}
