#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - free a dlistint_t list
 * @head: pointer to the start of a list
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	free_dlistint(head->next);
	free(head);
}
