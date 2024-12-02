#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strlen - Calculates the length of a string.
 * @s: The string whose length is to be calculated.
 *
 * Return: Length of the string.
 */
size_t _strlen(const char *s)
{
	size_t len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
/**
 * add_node_end - Add a new element to the end of the list.
 * @head: pointer to the start of list
 * @str: string to be added
 *
 * Return: The address of the new element, Null if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new_node;
	return (new_node);
}
