#include <stdio.h>
#include "search_algos.h"

/**
* binary_search - function that searches for a value
* in an array of integers, using binary search algo
* @array: pointer to the first element of array to search in
* @size: number of elements in array
* @value: the value to search for
* Return:first index where value is located
* :If value not present or if array is NULL,return -1
*/

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;
	size_t i;

	if (array == NULL)
		return (-1);
	while (left < right)
	{
		printf("Searching in array: ");
		for (i = left; i < (right + 1); i++)
		{
			if (i == (right))
			{
				printf("%i", array[i]);
			}
			else
			{
				printf("%i, ", array[i]);
			}
		}
		printf("\n");

		mid = (left + right) / 2;

		if (value == array[mid])
		{
			return (mid);
		}
		else if (value < array[mid])
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return (-1);
}
