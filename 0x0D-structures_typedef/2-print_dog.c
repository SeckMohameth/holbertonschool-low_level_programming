#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_dog - prints struct dog
*@d: pointer to struct
*
**/

void print_dog(struct dog *d)
{

	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age == 0.0)
		printf("Age: 0.000000");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", Jay);

}
