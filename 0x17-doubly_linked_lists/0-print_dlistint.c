#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: The head of the dlistint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes_number = 0;
	dlistint_t *new;

	new = h;
	while (new)
	{
		nodes_number++;
		printf("%d\n", new->n);
		new = new->next;
	}
	return (nodes_number);
}
