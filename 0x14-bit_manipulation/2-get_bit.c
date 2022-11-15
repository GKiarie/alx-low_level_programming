#include "main.h"

/**
 * get_bit - Function that returns the value at a given index
 * @n: Number base
 * @index: Index to get starting 0
 *
 * Return: Return 1 if it worked, or -1 if an error occurred
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 32)
		return (-1);

	return ((n >> index) & 1);
}
