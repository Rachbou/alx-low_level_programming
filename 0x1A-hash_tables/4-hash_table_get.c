/*
 * File: 4-hash_table_get.c
 * Auth: Rachid BOULMANI
*/

#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: NULL if the key cannot be matched.
 *         the value associated with key in ht Otherwise.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *new_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	new_node = ht->array[index];
	while (new_node && strcmp(new_node->key, key) != 0)
		new_node = new_node->next;

	return ((new_node == NULL) ? NULL : new_node->value);
}
