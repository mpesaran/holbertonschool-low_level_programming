#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - Prints all the elements of a list_t list.
 * @h: singly linked list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		current = current->next;
		count++;
	}
	return (count);
}
