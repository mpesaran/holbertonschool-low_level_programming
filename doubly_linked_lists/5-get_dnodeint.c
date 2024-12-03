#include "lists.h"

/**
 * get_nodeint_at_index - Gets an specific node of a list
 * @head: pointer to the start of a list
 * @index: index of the node 
 *
 * Return the node at index, Null if node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = head;
	unsigned int count = 0;

	while (curr->next != NULL)
	{
		if (count == index)
			return (curr);
		count++;
		curr = curr->next;
	}
	return (NULL);
}
