/*
 * File: 100-sorted_hash_table.c
 * Auth: Rachid BOULMANI
 */

#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of new sorted hash table.
 *
 * Return: NULL if an error occurs.
 *         Pointer to the new hash table otherwise.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *shash_table;
	shash_node_t **array;
	unsigned long int i;

	shash_table = malloc(sizeof(shash_table_t));
	if (shash_table == NULL)
	{
		return (NULL);
	}
	array = malloc(sizeof(shash_node_t *) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = NULL;
	}
	shash_table->size = size;
	shash_table->array = array;
	shash_table->shead = NULL;
	shash_table->stail = NULL;
	return (shash_table);
}

/**
 * shash_table_set - Adds an element to the sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: 1 on success and 0 on failure.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *node;
	char *copy_value;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	copy_value = strdup(value);
	if (copy_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->shead;
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = copy_value;
			return (1);
		}
		node = node->snext;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
	{
		free(copy_value);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(copy_value);
		free(new_node);
		return (0);
	}
	new_node->value = copy_value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	if (ht->shead == NULL)
	{
		new_node->sprev = NULL;
		new_node->snext = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		node = ht->shead;
		while (node->snext != NULL && strcmp(node->snext->key, key) < 0)
			node = node->snext;
		new_node->sprev = node;
		new_node->snext = node->snext;
		if (node->snext == NULL)
			ht->stail = new_node;
		else
			node->snext->sprev = new_node;
		node->snext = new_node;
	}

	return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to get the value of.
 *
 * Return: NULL if the key cannot be matched.
 *         the value associated with key in ht Otherwise.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;

	return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_print - Prints a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node1, *node2;

	if (ht == NULL)
		return;

	node1 = ht->shead;
	while (node1)
	{
		node2 = node1->snext;
		free(node1->key);
		free(node1->value);
		free(node1);
		node1 = node2;
	}

	free(head->array);
	free(head);
}
