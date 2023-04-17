#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize struct dog
 * @d: first parameter
 * @name: second parameter
 * @age: parameter
 * @owner: fourth parameter
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
