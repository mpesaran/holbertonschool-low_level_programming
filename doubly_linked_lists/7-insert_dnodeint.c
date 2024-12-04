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
	unsigned int len;
	dlistint_t *curr = *h;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (h == NULL)
		return (NULL);
	while (curr != NULL)
	{
		if (idx == len)
		{
			new_node->n = n;
			new_node->prev = curr;
			new_node->next = curr->next;
			new_node->prev = curr->prev;
			curr->next = new_node;
			if (new_node->next != NULL)
				new_node->next->prev = new_node;
		}
		len++;
		curr = curr->next;
	}
	if (len < idx)
		return (NULL);
	return (new_node);
}
