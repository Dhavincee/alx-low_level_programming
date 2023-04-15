#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: elements to be checked
 * @size: size of elemets
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int full_size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	full_size = nmemb * size;

	ptr = malloc(full_size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, full_size);
	return (ptr);
}
