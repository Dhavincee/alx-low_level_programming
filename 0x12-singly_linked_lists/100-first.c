#include "lists.h"
#include <stdio.h>

/**
 * before_main - function to display a message before main
 * Return: void
 */
void __attribute__ ((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
