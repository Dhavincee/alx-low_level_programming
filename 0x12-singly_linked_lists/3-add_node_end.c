#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - function that adds a new node at the end of a list
 * @head: pointer to a pointer to the first node of the list
 * @str: string to be stored in the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t len = 0;
	list_t *new_node = NULL;
	list_t *last = *head;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (last && last->next)
		last = last->next;

	len = strlen(new_node->str);
	new_node->len = len;
	new_node->next = NULL;

	if (last)
		last->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
