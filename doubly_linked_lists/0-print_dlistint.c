#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_dlistint - prints all the elements of a dlistint_t
 * @h: pointer to the beginning of a list
 *
 * Return: length of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t len = 0;
	int t;

	while (curr != NULL)
	{
		t = curr->n;
		_putchar(t + '0');
		_putchar('\n');
		len++;
		curr = curr->next;
	}
	return (len);
}
