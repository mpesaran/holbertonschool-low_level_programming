#include "lists.h"
#include <stdlib.h>
/**
 *add_dnodeint_end - Adds a node at the end of a list
 *@head: pointer to a pointer of beginning of a list
 *@n: the value for new node
 *
 * Return: the address of new element, Null if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *curr;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	curr = *head;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = new_node;
	new_node->prev = curr;
	return (new_node);
}
