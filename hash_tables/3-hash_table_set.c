#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: string to be key
 * @value: value associated with the key
 * Return: 1 if all is ok, 0 if something is wrong
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int k_index;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	k_index = key_index((unsigned char *)key, ht->size);

	if (c_node(&(ht->array[k_index]), key, value) == NULL)
		return (0);

	return (1);
}

/**
 * c_node - Create a node for the hash table
 * @head: first node of the hash table
 * @key: key of the hash table
 * @value: value for store the key
 * Return: The new node or NULL
 */
hash_node_t *c_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new = NULL;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);
	new->key = strdup(key);
	new->value = strdup(value);
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (*head);
}
