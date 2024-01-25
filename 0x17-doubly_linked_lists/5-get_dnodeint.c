#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Locates a node in a dlistint_t list.
 * @head: The head of the dlistint_t list.
 * @index: The node to locate.
 *
 * Return: Null if it fails - the address of the new node Otherwise.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;

	current = head;
	while (index > 0)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
		index--;
	}
	return (current);
}
