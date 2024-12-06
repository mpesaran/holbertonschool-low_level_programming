#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - Inserts in a new node at a given position
 * @h: pointre to the pointer of start of the list
 * @idx: index of where the new node will be added
 * @n: value of new node
 *
 * Return: the address of nwe node, Null if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *curr = *h, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
		(add_dnodeint(h, n));
	while (curr != NULL && i < idx - 1)
	{
		curr = curr->next;
		i++;
	}
	if (curr == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (curr->next == NULL)
		return (add_dnodeint_end(h, n));
	new_node->next = curr->next;
	new_node->prev = curr;
	if (curr->next != NULL)
		curr->next->prev = new_node;
	curr->next = new_node;
	return (new_node);
}
