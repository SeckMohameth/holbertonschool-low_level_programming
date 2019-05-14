#ifndef _DOG_H
#define _DOG_H

#include "holberton.h"
#include "dog.h"
/**
* init_dog - initialize struct dog
*@d: pointer struct
*@name: pointer to name
*@age: float age
*@owner: pointer to owner
*Return:
**/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

#endif
