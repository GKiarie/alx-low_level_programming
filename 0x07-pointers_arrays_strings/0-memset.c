#include "main.h"

/**
  * _memset - Function that fills memory with a constant byte
  * @s: pointer to the memory area to fill with const byte
  * @b: constant byte
  * @n: the number of bytes to be set to the value
  * Return: pointer to memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
