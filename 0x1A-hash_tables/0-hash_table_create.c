/*
 * File: 0-hash_table_create.c
 * Auth: Rachid BOULMANI
 */

#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: NULL if an error occurs.
 *         Pointer to the new hash table otherwise.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table  = malloc(sizeof(hash_table_t));
	hash_node_t **array = malloc(sizeof(hash_node_t *) * size);
	unsigned long int i;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL || array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = NULL;
	}
	hash_table->size = size;
	hash_table->array = array;
	return (hash_table);
}
