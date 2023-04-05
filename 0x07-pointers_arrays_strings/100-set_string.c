#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: first pointer
 * @to: second pointer
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
