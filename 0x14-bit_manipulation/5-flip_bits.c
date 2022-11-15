#include "main.h"

/**
 * flip_bits - ftn that returns the number of bits you'd
 * need to flip to get from one number to another
 * @n: Input Number
 * @m: Input Number
 *
 * Return: Numbers of bits that n has to change for be equal to m
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, counter;

	for (counter = i = 0; i < 64; i++, counter++)
		if (((n >> i) & 1) == ((m >> i) & 1))
			counter--;

	return (counter);
}
