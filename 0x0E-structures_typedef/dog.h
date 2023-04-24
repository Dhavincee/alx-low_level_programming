#ifndef DOG_H
#define DOG_H
/**
 * struct dog - function to be defined
 * @name: character1
 * @age: a float
 * @owner: character2
 * Description: This code is used to define a new type for dog with all element
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
