#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strlen - Calculates lenght of a string
 * @str: the string
 *
 * Return: length of the string
 */
size_t _strlen(const char *str)
{
	size_t len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
/**
 * add_node - Adda new node at the beginning of a list
 * @head: list_t type list
 * @str: string to be added
 *
 * Return: new list_t type list.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

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
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
