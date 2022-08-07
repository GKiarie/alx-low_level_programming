#include <stddef.h>
#include "function_pointers.h"

/**
  * array_iterator - function that executes a ftn given
  * as a parameter on each element of an array
  * @array: pointer to an arrays whose elemets are to be printed
  * @size: the size of the array
  * @action: pointer to the function to be used
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int long i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
