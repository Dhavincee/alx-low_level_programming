#include "dog.h"
#include <stddef.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: the struct name
 * @name: member 2
 * @age: member 3
 * @owner: member 4
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
