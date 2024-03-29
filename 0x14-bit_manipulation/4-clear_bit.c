#include "main.h"

/**
 * clear_bit - ftn that sets the value of a bit to 0 at a given index
 * @n: Pointer to num to be cleared
 * @index: Position toset, starting from 0
 *
 * Return: Return 1 if it worked, or -1 if an error occurred
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	*n = ~(1 << index) & *n;
	return (1);
}
