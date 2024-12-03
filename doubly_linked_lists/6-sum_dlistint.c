#include "lists.h"
/**
 * sum_dlistint - sums all data of a linked list
 * @head: pointer to the head of the list
 *
 * Return: an integer, 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *curr = head;

	if (head == NULL)
		return (0);
	while (curr->next != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	sum = sum + curr->n;
	return (sum);
}
