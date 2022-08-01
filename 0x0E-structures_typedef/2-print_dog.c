#include "dog.h"
#include <stdio.h>

/**
  * print_dog - function that prints a struct dog
  * @d: pointer to struct
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if ((*d).name == NULL)
	{
		printf("Name: (nil)\n");
	}
	if ((*d).owner == NULL)
	{
		printf("Name: (nil)\n");
	}
	/* if ((*d).age == NULL)
	{
		printf("Age: (nil)\n");
	} */


	if (d != 0)
	{
		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}
}
