#include "function_pointers.h"

/**
  * int_index - function that searches for an int
  * @array: pointer to input array
  * @size: number of elementys in the input array
  * @cmp: pointer to the function to be used to compare values
  * Return: index of the first element for which the cmp function
  *         doesn't retun 0
  *        -1 if no element matches and if size <= 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
