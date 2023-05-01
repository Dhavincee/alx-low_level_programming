#include "main.h"
#include <string.h>
/**
 * is_palindrome_helper - helps to check if a string is a palindrome
 * @s: string to be worked on
 * @start: the begining
 * @end: the end
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - function to check if a string is a palindrome
 * @s: string to be worked on
 * Return: returns 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
	{
		return (1);
	}
	return (is_palindrome_helper(s, 0, len - 1));
}
