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
	else
	{
		printf("Name: %s\n", (*d).name);
	}

	if ((*d).owner == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", (*d).owner);
	}
	printf("Age: %f\n", (*d).age);
}
