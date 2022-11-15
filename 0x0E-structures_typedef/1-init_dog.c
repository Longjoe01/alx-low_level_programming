#include "dog.h"
#include <stdio.h>

/**
* init_dog - initialise the variable struct dog
* @d: a pointer to a variable of type dog
* @age: age of dog
* @name: name of dog
* @owner: owner of dog
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
