#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - print a struct dog.
 * @d: pointer to struct.
 *
 * Return: void.
 */

void print_dog(struct dog *d)
{
	if (d == 0)
	{
		return;
	}
	else
	{
		if (d->name == NULL)
			printf("name: (nil)\n");
		else
			printf("name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("owner: (nil)\n");
		else
			printf("owner: %s\n", d->owner);
	}
}
