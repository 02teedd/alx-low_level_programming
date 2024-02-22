#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: The dog to be freed.
 */

void free_dog(dog_t *dog)
{
    if (dog == NULL)
	    return;

    free(dog->name);
    free(dog->owner);
    free(dog);
}
