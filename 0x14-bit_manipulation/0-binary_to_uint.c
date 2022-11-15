#include "main.h"

/**
  * binary_to_uint - function that converts a binary to
  * an unsigned int
  * @b: Pointing to a string of 0 & 1 chars
  * Return: Converted number, 0 if one or more chars
  * in string is b, is not 0 or 1, b is NULL
  */

unsigned int binary_to_uint(const char *b)
{
	int i, mult;
	unsigned int number = 0;

	if (!b)
		return (0);

	for (i = number = 0; b[i] != 0; i++)
	{
		if (b[i] != 48 && b[i] != 49)
			return (number);
	}

	for (i -= 1, mult = 0; i >= 0; i--, mult++)
	{
		if (b[i] == 48)
			continue;
		number += 1 << mult;
	}
	return (number);
}
