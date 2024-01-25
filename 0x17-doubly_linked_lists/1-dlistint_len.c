#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a linked dlistint_t list.
 * @h: The head of the dlistint_t list.
 *
 * Return: The number of elements in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes_number = 0;
	dlistint_t *new;

	new = h;
	while (new)
	{
		nodes_number++;
		new = new->next;
	}
	return (nodes_number);
}
