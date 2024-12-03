#include "lists.h"
#include <stddef.h>
/**
 * dlistint_len - Counts the number of elements in alinked list
 * @h: pointer to the start of list
 *
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t count = 0;

	while (curr != NULL)
	{
		count++;
		curr = curr->next;
	}
	return (count);
}
