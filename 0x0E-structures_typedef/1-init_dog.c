#include "dog.h"

/**
 * init_dog - initialize variable of type struct dog
 * @d: dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: name of owner of dog
 * Return: 0 (success)
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	dog.name = *name;
	dog.age = age;
	dog.owner = *owner;
}
