#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - Deletes the node at index of a list
 * @head: pointer to the pointer of a slistint_t list
 * @index: index of the node that should be deleted
 *
 *Return: 1 if it succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	while (curr != NULL && i < index)
	{
		curr = curr->next;
		i++;
	}
	if (curr == NULL)
		return (-1);
	if (curr->prev == NULL)
	{
		*head = curr->next;
		if (curr->next != NULL)
			curr->next->prev = NULL;
	}
	else
	{
		curr->prev->next = curr->next;
		if (curr->next != NULL)
			curr->next->prev = curr->prev;
	}
	free(curr);
	return (1);
}
