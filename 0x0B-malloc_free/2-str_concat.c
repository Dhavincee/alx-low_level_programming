#include "main.h"
#include <string.h>

/** 
 * str_concat - function that concatenates two strings
 * @s1: first string 
 * @s2: second string to be concatenated
 * Return: Always 0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 = NULL)
	{
		s2 = "";
	}
	
	int len1 = 0, len2 = 0;

	
