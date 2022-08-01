#include "dog.h"

/**
  * init_dog - function that initializes a variable of type struct dog
  * @d: pointer to dog instance
  * @name: pointer to dog name
  * @age: dog age
  * @owner: pointer tp dog owner name
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
	else
	{
		return;
	}
}
