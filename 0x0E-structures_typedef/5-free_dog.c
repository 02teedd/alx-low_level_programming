#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char *name;
    float age;
    char *owner;
} dog_t;

void free_dog(dog_t *dog)
{
    if (dog != NULL)
    {
        free(dog->name);
        free(dog->owner);
        free(dog);
    }
}

int main(void)
{
    dog_t *myDog = /* Assume you have a valid dog created */

    free_dog(myDog);

    return (0);
}
