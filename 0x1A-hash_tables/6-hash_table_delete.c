/*
 * File: 6-hash_table_delete.c
 * Auth: Rachid BOULMANI
*/

#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node1, *node2;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node1 = ht->array[i];
			while (node1 != NULL)
			{
				node2 = node1->next;
				free(node1->key);
				free(node1->value);
				free(node1);
				node1 = node2;
			}
		}
	}
	free(head->array);
	free(head);
}
