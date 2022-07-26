#include "main.h"
#include <stdlib.h>

/**
  * create_array - function that creates an array of chars
  * and initializes it witha specific char.
  * @size: size of memory in heap
  * @c: character to initialize in the array created
  * Return: pointer to the first element of the memory set
  */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int counter;

	/* allocate space for array members */
	ptr = malloc(size * sizeof(char));

	if (size == 0 || size == NULL)
	{
		return (NULL);
	}

	/* assign character c in all mem slots allocated */
	for (counter = 0; counter < size; counter++)
	{
		ptr[counter] = c;
	}

	return (ptr);
}
