#include "lists.h"
#include <stdlib.h>

/**
 * free_list -  function that frees a list_t list
 * @head: pointer to the first element
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current = head;

	while (current != NULL)
	{
		list_t *next = current->next;

		free(current->str);
		free(current);
		current = next;
	}
}
