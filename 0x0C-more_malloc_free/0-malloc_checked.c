#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - function that allocates memory
  * using malloc
  * @b: size of memory to be allocated
  * Return: pointer to the allocated memory
  */

void *malloc_checked(unsigned int b)
{
	void *ptr_mem = malloc(b);

	if (ptr_mem == NULL)
	{
		exit(98);
	}

	return (ptr_mem);
}
