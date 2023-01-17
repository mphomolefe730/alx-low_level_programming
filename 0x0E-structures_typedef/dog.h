#ifndef DOG_H
#define DOG_H

/**
 * struct dog - is a struct for dog struct
 * @name: name of dog
 * @age:age of dog
 * @owner: who owners the dog
 **/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
