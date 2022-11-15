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
	int i, mult = 1;
	unsigned int number = 0;

	if (b == '\0')
		return (0);

	for (i = 0; b[i];)
		i++;

	for (i -= 1; i >= 0; i--)
	{
		if (b[i] != '\0' && b[i] != '1')
			return (0);
		number += (b[i] - '0') * mult;
		mult *= 2;
	}
	return (number);
}
