#include "main.h"
#include <string.h>

/**
 * string_toupper - function that changes lowercase to uppercase
 * @run: string to be checked
 * Return: Always 0 (Success)
 */
char *string_toupper(char *run)
{
	int i = 0;

	while (run[i] != '\0')
	{
		if (run[i] >= 'a' && run[i] <= 'z')
		{
			run[i] = run[i] - ('a' - 'A');
		}
		i++;
	}
	return (run);
}
