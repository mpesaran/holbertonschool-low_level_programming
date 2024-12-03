#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - Adds a new node at the beginning of a list
 *@head: pointer to the beginning of the list
 *@n: value to be added in new node
*
* Return: pointer to the new node at the beginning of the list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
