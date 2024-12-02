#include "lists.h"
#include <stddef.h>
/**
 * list_len - Pritns number of elements in a list
 * @h: lis_t type linked list
 *
 * Return: Number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		length++;
		current = current->next;
	}
	return (length);
}
