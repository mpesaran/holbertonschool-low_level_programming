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
	unsigned int len = 0;
	dlistint_t *curr = *h;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 1)
	{
		new_node->next = *h;
		if (h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (curr != NULL)
	{
		if (idx == len)
		{
			new_node->prev = curr->prev;
			new_node->next = curr;
			curr->prev = new_node;
			if (new_node->next != NULL)
				new_node->next->prev = new_node;
			return (new_node);
		}
		len++;
		curr = curr->next;
	}
	if (len < idx)
		return (NULL);
	return (new_node);
}
