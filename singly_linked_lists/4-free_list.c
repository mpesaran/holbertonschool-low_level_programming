#include "lists.h"
#include <stdlib.h>
/**
 * free_list - Frees a list_t linked list.
 * @head: Pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *curr = head;
	list_t *next_node;

	if (head == NULL)
		return;
	while (curr != NULL)
	{
		next_node = curr->next;
		free(curr->str);
		free(curr);
		curr = next_node;
	}
	head = NULL;
}
